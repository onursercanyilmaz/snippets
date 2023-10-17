import React, {useEffect} from 'react'
import EditableBasicTable from '../components/EditableBasicTable';
export default function EditableBasicTablePage() {
    
var data=[
    {name:"name1",age:1, surname:"surname1"}
    ,{name:"name2",age:2, surname:"surname2"}
    ,{name:"name3",age:3, surname:"surname3"}
    ,{name:"name4",age:4, surname:"surname4"}

]
    const fetchData=()=>{

    }

    useEffect(()=>{
        fetchData()
    },[])
  return (
    <div style={{padding:"50px"}}><EditableBasicTable data={data}/></div>
  )
}
