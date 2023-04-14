import axios from 'axios'
import React, {useEffect, useState} from 'react'
import {useAuth} from '../../../../app/modules/auth'
import {start} from 'repl'
import { v4 as uuidv4 } from 'uuid';
import { table } from 'console';
import { Fab } from '@mui/material';

declare var alertify: any

 const Table = () => {
  
  const auth = useAuth().auth
 

  const [loading, setLoading] = useState(false)
  const [sentNotificationData, setSentNotificationData] = useState<any[]>([])
  const [notificationTypes, setNotificationTypes] = useState<any>([])
  const [templates, setTemplates] = useState<any>([])
  const [selectedTemplate, setSelectedTemplate] = useState<any>([])
  const [selectedNotificationTypeId, setSelectedNotificationTypeId] = useState<any>(0)
  const [selectedTemplateId, setSelectedTemplateId] = useState<any>('0')
  const [startDate, setStartDate] = useState<any>('2023-01-01')
  const [tableHeaders, setTableHeaders] = useState<any>(["ID", "Alıcı"]);
 
  const [rows, setRows] = useState<any>([]); // array to hold retrieved tags from dropdown

 

  const returnToday = () => {
    var today = new Date()
    var dd = String(today.getDate()).padStart(2, '0')
    var mm = String(today.getMonth() + 1).padStart(2, '0') //January is 0!
    var yyyy = today.getFullYear()
    var day = yyyy + '-' + mm + '-' + dd
    console.log(day)
    return day
  }
  const [endDate, setEndDate] = useState<any>(returnToday)
  const [endpointTypes, setEndpointTypes] = useState<any>([   
    { id: uuidv4(), name: 'Alice' },
  { id: uuidv4(), name: 'Bob'},
  { id: uuidv4(), name: 'Charlie' },])

  const [groups, setGroups] = useState<any>([])

  const sortTable = (n: number) => {
    var table,
      rows,
      header,
      switching,
      i: number,
      x,
      y,
      shouldSwitch,
      dir,
      switchcount = 0
    table = document.getElementById('sentTable') as HTMLTableElement

    switching = true
    // Set the sorting direction to ascending:
    dir = 'asc'

    /* Make a loop that will continue until
    no switching has been done: */
    if (table.rows !== null && table.rows !== undefined) {
      while (switching) {
        // Start by saying: no switching is done:
        switching = false
        rows = table.rows

        /* Loop through all table rows (except the
      first, which contains table headers): */
        for (i = 1; i < rows!.length - 1; i++) {
          // Start by saying there should be no switching:
          shouldSwitch = false
          /* Get the two elements you want to compare,
        one from current row and one from the next: */
          x = rows[i].getElementsByTagName('TD')[n]
          y = rows[i + 1].getElementsByTagName('TD')[n]
          /* Check if the two rows should switch place,
        based on the direction, asc or desc: */
          if (dir == 'asc') {
            if (x.innerHTML.toLowerCase() > y.innerHTML.toLowerCase()) {
              // If so, mark as a switch and break the loop:
              shouldSwitch = true
              break
            }
          } else if (dir == 'desc') {
            if (x.innerHTML.toLowerCase() < y.innerHTML.toLowerCase()) {
              // If so, mark as a switch and break the loop:
              shouldSwitch = true
              break
            }
          }
        }
        if (shouldSwitch) {
          /* If a switch has been marked, make the switch
        and mark that a switch has been done: */
          var rowsParent = rows[i].parentNode
          if (rows[i].parentNode !== null) {
            rowsParent?.insertBefore(rows[i + 1], rows[i])
            switching = true
          }

          // Each time a switch is done, increase this count by 1:
          switchcount++
        } else {
          /* If no switching has been done AND the direction is "asc",
        set the direction to "desc" and run the while loop again. */
          if (switchcount == 0 && dir == 'asc') {
            dir = 'desc'

            switching = true
          }
        }
      }
    }
  }
 
 

  const [data, setData] = useState<any>([
    { id: uuidv4(), recipient: 'Alice' },
    { id: uuidv4(), recipient: 'Bob'  },
    { id: uuidv4(), recipient: 'Charlie' },
  ]);

  const [keys, setKeys] = useState<any>([])

  const handleAddRow = () => {
   
    const newRow = { id: uuidv4(), recipient:"" };
    setData([...data, newRow]);
  };
  const handleDeleteRow = (id:number) => {
    setData(data.filter((item:any) => item.id !== id));
  };

  const handleChange = (id:number, field:any, value:any) => {
    setData(
      data.map((item:any) => {
        if (item.id === id) {
          return { ...item, [field]: value };
        } else {
          return item;
        }
      })
    );
    console.log(data)
  };

  const handleTemplateId = (e: any) => {
    setSelectedTemplateId(e.target.value)
  }
  
 

    setSelectedTemplate(data.data.templateModel)
     getTagsFromSelectedTemplate(data.message)
  }

  const getTagsFromSelectedTemplate = (templateMessage:string) =>
  {
    const regex = /{{(.*?)}}/g;
    const tags = templateMessage.match(regex);
    let cleanedList = tags?.length != 0 || tags != null ? tags?.map(tag => tag.replace(/{{|}}/g, "")):[];
    if (cleanedList!= undefined || cleanedList != null)
    {
    var newDataList: any[]=[]
    data.forEach((element: any, index:number) => {
      var newData:any = {
        id: index+1,
        recipient: element.recipient,
      };
  
      // Add tags data into newData object
      cleanedList?.forEach(tag => {
        newData[tag] = ''; // assuming the tags in cleanedList are the keys for newData object
      });

      newDataList.push(newData)
      setData(newDataList)
      console.log(newData)
  
  })

}

   else{
    var defaultHeaders = tableHeaders.slice(0,2)
      setTableHeaders(defaultHeaders)
   }
   
  }

  useEffect(() => {
    //fetches notification types first of all
    fetchNotificationTypes()
  }, [])

  useEffect(()=>{
    fetchTemplatesByNotificationType();
   
  },[selectedNotificationTypeId])

  useEffect(()=>{
    fetchTemplateByTemplateId();
  },[selectedTemplateId])

  useEffect(()=>{
    var keyList = data.length!==0? Object.keys(data[0]).filter(item => item !== "id"): [];
    setKeys(keyList)

  },[data])



  const [currentPage, setCurrentPage] = useState(1); // Şu anki sayfa
  const [rowsPerPage, setRowsPerPage] = useState(10)
  const totalPages = Math.ceil(data.length / rowsPerPage); // Toplam sayfa sayısı

  // Şu anki sayfada görünen verilerin hesaplanması
  const indexOfLastRecord = currentPage * rowsPerPage;
  const indexOfFirstRecord = indexOfLastRecord - rowsPerPage;
  const currentData = data.slice(indexOfFirstRecord, indexOfLastRecord);

  // Sayfa değiştirme fonksiyonu
  const handlePageChange = (newPage:any) => {
    setCurrentPage(newPage);
  };
  return (
    <div>
      <div style={{display: 'flex', justifyContent: 'center', marginBottom: '10px'}}>
        <h2 style={{padding: '15px', borderRadius: '2px', border: '1px solid'}}>
         Alıcı Listesi Oluştur
        </h2>
        <hr style={{color: 'transparent'}}></hr>
      </div>
      <div style={{display: 'flex', justifyContent: 'center'}}>
        <hr style={{color: 'transparent'}}></hr>
        <hr style={{color: 'transparent'}}></hr>
        <div className='mb-5' style={{marginRight: '5px'}}>
        <label className='form-label'>Bildirim Türü*</label>
        <select
          className='form-select'
          aria-label='Select example'
          live-search='true'
          placeholder='Merhaba'
          defaultValue={'DEFAULT'}
         onChange={(e:any)=>setSelectedNotificationTypeId(e.target.value)}
        >
          <option value='DEFAULT' disabled>
            Bildirim türü seçiniz
          </option>
         
          {notificationTypes.map((notificationType: any) => (
            <option
              key={notificationType.notificationTypeId}
              value={notificationType.notificationTypeId}
            >
              {notificationType.notificationTypeName}
            </option>
          ))}
        </select>
      </div>
     
      <div className='mb-5' style={{marginRight: '5px'}}>
      <label className='form-label'>Mesaj Şablonu</label>
      <select
        id='templateSelect'
        className='form-select'
        aria-label='Select example'
        live-search='true'
        placeholder='Merhaba'
        defaultValue={'DEFAULT'}
        onChange={handleTemplateId}
      >
        <option value='DEFAULT' disabled>
          Mesaj Şablonu Seçiniz
        </option>
        {templates.map((template: any, index: number) => (
          <option key={template.templateId} value={template.templateId}>
            {template.templateName}
          </option>
        ))}
      </select>
    </div>
      </div>
          
     

      <div className='text-center'>
        <button
          style={{width: '150px'}}
          type='button'
          className='btn btn-lg btn-primary w-10 mb-5'
          //onClick={handleSearch}
        >
          {!loading && <span className='indicator-label'>Ara</span>}
          {loading && (
            <span className='indicator-progress' style={{display: 'block'}}>
              Aranıyor...
              <span className='spinner-border spinner-border-sm align-middle ms-2'></span>
            </span>
          )}
        </button>
      </div>
      <hr style={{color: 'transparent'}}></hr>
      <div className='table-responsive'>
      <div>
      
      {keys.length !== 0 && data.length !== 0 &&( 
       <div>
        <table id='recipientTable' style={{width:"100%", alignContent:"center", alignItems:"center"}} className='table table-rounded table-striped border gy-7 gs-7'>
        <thead>
        <tr className='fw-semibold fs-6  border-bottom border-gray-200'>

        <th className='sortableTableHeader' key="id">ID</th>
          {keys.map((key:any) => (
            <th className='sortableTableHeader' key={key}>{key ==="recipient"? "Alıcı Adresi":key}</th>
          ))}
           <th style={{textAlign:"right"}} className='sortableTableHeader' key="send"> <button  className="btn btn-sm btn-primary "  onClick={handleAddRow}>Gönder</button></th>
        </tr>
        </thead>
       <tbody>
        {currentData.map((item:any, index:number) => (
          <tr key={index}>
           
            <td key={index}>{(currentPage-1)*rowsPerPage+index+1}</td>
            {keys.map((key:any) => (
              <td key={key}>{item[key]}</td>
            ))}
             <td key={item.id}  style={{textAlign:"right"}}> 
             <a className='Delete btn btn-outline-danger'onClick={()=>handleDeleteRow(item.id)}>
                       
             <span id='deleteButton'>❌ Sil</span>
                       
               </a> </td>
          </tr>
        ))}
      </tbody>
     
      </table>
      <div style={{display: 'flex', justifyContent:"space-between"}}>
      <div style={{display: 'flex', justifyContent: 'flex-start'}}>  <button  className="btn btn-sm"  onClick={handleAddRow}>➕</button> </div>
      <div style={{display: 'flex', justifyContent: 'flex-end', alignItems: 'center',}}>
    
              <label className='form-label' style={{ whiteSpace: 'nowrap', textAlign:"center", alignContent:"center", marginRight:"10px" }}>Sayfa başına </label>
              <select
                className='form-select form-select-sm'
                aria-label='Select example'
                placeholder='Sayfa başına veri'
                onChange={(e:any)=> setRowsPerPage(e.target.value)}
              >
                <option value={10}>10</option>
                <option value={25}>25</option>
                <option value={50}>50</option>
                <option value={100}>100</option>
              </select>
        
        <button
        className="btn btn-text-dark btn-hover-light-dark font-weight-bold mr-2"
          onClick={() => handlePageChange(currentPage - 1)}
          disabled={currentPage === 1}
          style={{marginRight:"10px", marginLeft:"10px"}}
        >
          Önceki
        </button>

        <button
         className="btn btn-text-dark btn-hover-light-dark font-weight-bold mr-2"
          onClick={() => handlePageChange(currentPage + 1)}
          disabled={currentPage === totalPages}
          
        >
          Sonraki
        </button>
      </div> </div>
      </div>
      )}
    </div>
      </div>
     {data.length===0 ? <button  className="btn btn-sm"  onClick={handleAddRow}>➕</button> :""}
    </div>
  )


}

export default Table
