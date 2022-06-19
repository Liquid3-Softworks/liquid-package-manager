import React from "react";
import { AppBar, IconButton, styled, Toolbar, Typography, } from "@mui/material";
import { Settings, AccountCircle} from "@mui/icons-material";

const Navbar = () => {

    const StyledToolbar = styled(Toolbar)({
        
        '@media all': {
          minHeight: 48,
        },
    })

    return <AppBar position="static" color="primary" enableColorOnDark>
        <StyledToolbar>
        <Typography  sx={{ flexGrow: 1}}/>
        <IconButton >
            <Settings sx={{ fontSize: 23 }}/>
        </IconButton>
        <IconButton>
            <AccountCircle sx={{ fontSize: 30 }}/>
        </IconButton>
        <p>SDAez</p>
        </StyledToolbar>
    </AppBar>
}

export default Navbar