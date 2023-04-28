FRS()
{
    select several
    {
        dummy = DUMMY();
    }
}

FRS_MAIN()
{
	MEMBER(DATA32 scalers[32] ZERO_SUPPRESS_LIST);
  	UINT32 no NOENCODE;

  	if (no == 0xbabababa)
  	{
    	UINT32 sc NOENCODE;
    	if ((sc & 0xFFFF0000) == 0x0c800000)
    	{
      		list (0 <= index < 32)
      		{
				UINT32 ch_data NOENCODE;
				ENCODE(scalers[index], (value=ch_data));
      		}
    	}
  	}  
}

FRS_FRS()
{
    MEMBER(DATA32 scalers[32] ZERO_SUPPRESS_LIST);
    UINT32 no NOENCODE;

    if ((no & 0xFFFF0000) == 0x04400000)
    {
        list (0 <= index < 32)
        {
        UINT32 ch_data NOENCODE;
        ENCODE(scalers[index], (value=ch_data));
        }
    }
}

TRLOII_TPAT(id)
{
	MEMBER(DATA32 n);
	MEMBER(DATA32 tpat[170] NO_INDEX_LIST);
	MEMBER(DATA8 trig[170] NO_INDEX_LIST);
	MEMBER(DATA32 ts_lo[170] NO_INDEX_LIST);
	MEMBER(DATA32 ts_hi[170] NO_INDEX_LIST);

	UINT32 header NOENCODE {
		0_11:  uint32_num;
		12_23: event_num;
		24_31: id = MATCH(id);
		ENCODE(n, (value=uint32_num / 3));
	}

	list(0 <= index < header.uint32_num / 3) {
		UINT32 time_lo NOENCODE {
			0_31: t;
			ENCODE(ts_lo APPEND_LIST, (value=t));
		}
		UINT32 time_hi NOENCODE {
			0_30: t;
			31:   overflow;
			ENCODE(ts_hi APPEND_LIST, (value=t));
		}
		UINT32 trigger NOENCODE {
			0_23:  tpat;
			24_27: encoded;
			28_31: lec;
			ENCODE(tpat APPEND_LIST, (value=tpat));
			ENCODE(trig APPEND_LIST, (value=encoded));
		}
	}
}
