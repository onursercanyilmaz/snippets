import React, { useMemo } from "react";
import clsx from "clsx";
import { useTable, useFlexLayout, useResizeColumns, useSortBy } from "react-table";


const defaultColumn = {
    minWidth: 50,
    width: 150,
    maxWidth: 400,
    sortType: "alphanumericFalsyLast"
};

export default function EditableTable() {

    return (
        <>
        <table className="table table-bordered table-striped">
            <thead>
                <tr>
                    <th>First Name</th>
                    <th>Last Name</th>
                    <th>Age</th>
                </tr>
            </thead>
            <tbody>
                <tr>
                    <td>John</td>
                    <td>Doe</td>
                    <td>45</td>
                </tr>
                <tr>
                    <td>Mary</td>
                    <td>Moe</td>
                    <td>32</td>
                </tr>
                <tr>
                    <td>July</td>
                    <td>Dooley</td>
                    <td>22</td>
                </tr>
            </tbody>
        </table>
        
        </>)
}
