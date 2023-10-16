import logo from './logo.svg';
import './App.css';
import {
  BrowserRouter as Router,
  Route,
  Link
} from 'react-router-dom'
import EditableTablePage from './pages/EditableTablePage';
import React, { Fragment, useEffect, useState,useContext} from "react";
import {  Routes, Navigate } from "react-router-dom";
import Home from './pages/Home';
function App() {
  return (
    <Fragment>
    <Routes>
      <Route path="/" element={<Home />} />
      <Route path="/home" element={<Home />} />
      <Route path="/editable-table" element={<EditableTablePage />} />
      
  

      {
        //T <Route path="/path/:id" element={<Page />} />
      }

    </Routes>
  </Fragment>
  );
}

export default App;
