import React from 'react';
import './App.css';
import Navbar from './components/navBar';
import PackageItem from './components/packageItem';
import { ThemeProvider } from '@mui/material/styles';
import mainTheme from './muiThemes';

function App() {

  return (
    <ThemeProvider theme={mainTheme}> 
      <div className="App">
        <Navbar/>
        <PackageItem/>
      </div>
    </ThemeProvider>
  );
}

export default App;
