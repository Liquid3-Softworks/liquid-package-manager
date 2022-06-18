import React from "react";
import { AppBar, } from "@mui/material";
import AccountCircleIcon from '@mui/icons-material/AccountCircle';
import { Settings } from "@mui/icons-material";

const Navbar = () => {
    return <AppBar className="Navbar" color="primary" enableColorOnDark>
        <AccountCircleIcon className="ProfilePhoto"/>
        <Settings className="Settings Menu"/>
    </AppBar>
}

export default Navbar