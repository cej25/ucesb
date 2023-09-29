//#define GE_MAX_HITS

SIGNAL(wr_subsystem_id, germanium.ts.subsystem_id,DATA12);
SIGNAL(wr_t1, germanium.ts.t1, DATA16);
SIGNAL(wr_t2, germanium.ts.t2, DATA16);
SIGNAL(wr_t3, germanium.ts.t3, DATA16);
SIGNAL(wr_t4, germanium.ts.t4, DATA16);

SIGNAL(board_id, germanium.data.board_id, DATA8);
SIGNAL(event_trigger_time_hi, germanium.data.event_trigger_time_hi, DATA32);
SIGNAL(event_trigger_time_lo, germanium.data.event_trigger_time_lo, DATA32);
SIGNAL(hit_pattern, germanium.data.hit_pattern, DATA16);
SIGNAL(num_channels_fired, germanium.data.num_channels_fired, DATA32);

SIGNAL(pileup1, germanium.data.pileup[0], pileup16, germanium.data.pileup[15], DATA8);
SIGNAL(overflow1, germanium.data.overflow[0], overflow16, germanium.data.overflow[15], DATA8);


SIGNAL(channel_id1,germanium.data.channel_id[0],channel_id16,germanium.data.channel_id[15],DATA8);
SIGNAL(channel_trigger_time_hi1,germanium.data.channel_trigger_time_hi[0],channel_trigger_time_hi16,germanium.data.channel_trigger_time_hi[15],DATA16);
SIGNAL(channel_trigger_time_lo1,germanium.data.channel_trigger_time_lo[0],channel_trigger_time_lo16,germanium.data.channel_trigger_time_lo[15],DATA32);
SIGNAL(channel_energy1,germanium.data.channel_energy[0],channel_energy16,germanium.data.channel_energy[15],DATA32);
