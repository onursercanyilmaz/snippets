import React, { useMemo } from "react";
import clsx from "clsx";


export default function EditableBasicTable(props) {

    return (
        <>
        <table className="table table-bordered table-striped">
            <thead>
            <tr>
                {
                
                    Object.keys(props.data[0]).map((element) => {
                          return <th>{element}</th>
                    })
                  
               }
                </tr>
                
            </thead>
            <tbody>
                {props.data.map((item, index) => {
                    return <tr id={index}>
                    <td>
                        <input class="form-control" type="text" defaultValue={item.name} onChange={props.handleName}/>
                    </td>
                    <td>
                        <input class="form-control" type="text" defaultValue={item.surname} onChange={props.handleSurname}/>
                    </td>
                    <td>
                        <input class="form-control" type="text" defaultValue={item.age} onChange={props.handleAge}/>
                    </td>
                </tr>
                })}
                
              
            </tbody>
        </table>

        </>)
}
