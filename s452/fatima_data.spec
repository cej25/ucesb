FATIMA_VME()
{   
    select optional
    {
        scaler = FATIMA_SCALER();
    }
    select several
    {
        dummy = DUMMY();
    }
}

FATIMA_TAMEX()
{   

    select several
    {
        dummy = DUMMY();
    }
}

// readout sequence is SCALER - QDC - TDC

FATIMA_SCALER()
{
    // stuff 
    MEMBER(DATA32 scalers[16] ZERO_SUPPRESS_LIST);

    UINT32 header NOENCODE
    {
        0_31: h = 0x7a001000;
        // 0_31: h = 0xF8000000;
    }

    list(0 <= index < 16)
    {
        UINT32 ch_data NOENCODE;
        ENCODE(scalers[index], (value = ch_data));
    }

    UINT32 trailer NOENCODE
    {
        0_31: t = 0x7c000000;
    }

}

FATIMA_QDC()
{
    // qdc stuff
}

FATIMA_TDC()
{
    // tdc stuff
}