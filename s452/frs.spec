// -*- C++ -*-

// ZSM(128) is a somewhat arbitrary i think? 
// Especially as we discard anything beyond 10. 
// Maybe can choose 64 or 32? 32 is max?
#define MEMBERS \
    MEMBER(DATA24 data[32] ZERO_SUPPRESS_MULTI(32)); \
    MEMBER(DATA8 channel[32] NO_INDEX_LIST); \
    MEMBER(DATA8 leadOrTrail[32] NO_INDEX_LIST);// not sure how to define this properly


// should it be 32 channels? lets see

#define PARAMS_DEF \
    data, \
	channel, \
    leadOrTrail

#define PARAMS \
    data = data, \
	channel = channel, \
    leadOrTrail = leadOrTrail


BARRIER()
{
    UINT32 barrier NOENCODE
    {
        0_31: ba = MATCH(0xbabababa);
    }
}

TDC_DATA(PARAMS_DEF)
{   
    MEMBERS

    MEMBER(DATA8 multihit);

    UINT32 tdc_data NOENCODE
    {
        0_20: value;
        21_25: chn;
        26: lot;
        27_31: 0b00000;
        
        ENCODE(data[chn],(value = value/*,trailing=trailing*/));
        ENCODE(channel APPEND_LIST, (value = chn));
        ENCODE(leadOrTrail APPEND_LIST, (value = lot));
    }
}

TDC_HEADER()
{   
    UINT32 tdc_header NOENCODE
    {
        0_11: bunch_id;
        12_23: event_id;
        24_25: tdc;
        26: unused;
        27_31: 0b00001;
    }
}

TDC_ERROR()
{
    UINT32 tdc_err NOENCODE
    {
        0_14: error_flags;
        15_23: unused1;
        24_25: tdc;
        26: unused2;    
        27_31: 0b00100;
    }
}

TDC_TRAILER()
{
    UINT32 tdc_trailer NOENCODE
    {
        0_11: word_count;
        12_23: event_id;
        24_25: tdc;
        26: unused;
        27_31: 0b00011;
    }
}

ADC_DATA()
{
    UINT32 adc_data NOENCODE
    {   
        0_11: adc;
        12: overflow;
        13: underthreshold;
        14_15: unused;
        16_20: channel;
        21_23: unused2;
        24_26: 0b000;
        27_31: geo;
    };
}


VME_CAEN_V1290_FRS()
{   

    MEMBERS

    UINT32 header NOENCODE
    {   
        0_4: geo;
        5_26: event_count;
        27_31: 0b01000;
    };



    select several
    {
        tdc_header = TDC_HEADER();
        measurement = TDC_DATA(PARAMS);
        tdc_error = TDC_ERROR();
        tdc_trailer = TDC_TRAILER(); 
    };
 
    // if enabled
    optional UINT32 ext_time_tag NOENCODE
    {
        0_26: time_tag;
        27_31: 0b10001;
    }

    UINT32 trailer NOENCODE
    {
        0_4: geo;
        5_20: word_count;
        21_23: unused;
        24: tdc_error;
        25: overflow;
        26: trigger_lost;
        27_31: 0b10000;
    };


}

VME_CAEN_V830_FRS()
{
    UINT32 header NOENCODE
    {   
        0_15: trigger_number;
        16_17: ts;
        18_23: nwords;
        24_25: unused;
        26: 0b1; // distinguish header from 26bit word
        27_31: geo;
    };

    list (0 <= i < header.nwords)
    {
        UINT32 data_word NOENCODE
        {
            0_31: data;
        };
    }
 
/*
    UINT32 eob NOENCODE
    {

    };

    */
}

VME_CAEN_V792_FRS()
{
    UINT32 header NOENCODE
    {   
        0_7: unused;
        8_13: cnt;
        14_15: 0b00;
        16_23: crate;
        24_26: 0b010;
        27_31: geo;
    };
    
    /*select_several
    {
        adc = ADC_DATA();
    }*/

    several UINT32 adc_data NOENCODE
    {   
        0_11: adc;
        12: overflow;
        13: underthreshold;
        14_15: unused;
        16_20: channel;
        21_23: unused2;
        24_26: 0b000;
        27_31: geo;
    };

    UINT32 eob NOENCODE
    {   
        0_23: eventcounter;
        24_26: 0b100;
        27_31: geo;
    };
}
