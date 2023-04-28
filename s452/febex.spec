FEBEX_ADD()
{
	UINT32 febex_add NOENCODE 
    {
		0_11:  counter;
		12_19: index; // unnecessary to split for our purposes, change.
		20_31: 0xadd;
	}

}

FEBEX_HEADER(sfp, card)
{
	UINT32 febex_header NOENCODE
	{
		0_7: 0x34; // three_four?
		8_11: trig_type;
		12_15: sfp = MATCH(sfp); // or just sfp_id?
		16_23: card = MATCH(card); // or just chan_head?
		24_31: 0xff; // or just ff?
	}
}

FEBEX_CHAN_SIZE()
{
	UINT32 febex_chan_size NOENCODE
	{
		0_1: ignore;
		2_31: chan_size;
	}
}

FEBEX_HALF_SIZE()
{
	UINT32 febex_half_size NOENCODE
	{
		0_15: ext_time;
		16_31: blank;
	}
}

FEBEX_EVENT_TIME()
{
	UINT32 febex_event_time NOENCODE
	{
		0_31: event_time; 
	}
}

FEBEX_FLAG_HITS()
{
	UINT32 febex_flag_hits NOENCODE
	{
		0_15: hit_patterns;
		16_31: pile_flags;
	}
}

FEBEX_DEADBEEF()
{
	UINT32 febex_deadbeef NOENCODE
	{
		0_31: deadbeef;
	}
}

FEBEX_CHAN_HEADER()
{	
	UINT32 febex_chan_header NOENCODE
	{
		0_15: ext_chan_ts;
		16_23: Ch_ID;
		24_31: oxfo; 
	}
}

FEBEX_TS()
{
	UINT32 febex_ts NOENCODE
	{
		0_31: chan_ts;
	}
}

FEBEX_EN()
{
	UINT32 febex_en NOENCODE
	{
		0_23: chan_en;
		24_29: cf;
		30: pileup;
		31: overflow;
	}
}

FEBEX_FUTURE()
{
	UINT32 febex_future NOENCODE
	{
		0_31: future;
	}
}

