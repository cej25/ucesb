class raw_event_wr_subsystem
{
  DATA12 id;
  STRUCT_FCNS_DECL(raw_event_wr_subsystem);
} ;
class raw_event_wr
{
  raw_event_wr_subsystem
       subsystem;
  DATA16 t[4];
  STRUCT_FCNS_DECL(raw_event_wr);
} ;
class raw_event_board
{
  DATA8 id;
  STRUCT_FCNS_DECL(raw_event_board);
} ;
class raw_event_event_trigger_time
{
  DATA32 hi;
  DATA32 lo;
  STRUCT_FCNS_DECL(raw_event_event_trigger_time);
} ;
class raw_event_event_trigger
{
  raw_event_event_trigger_time
       time;
  STRUCT_FCNS_DECL(raw_event_event_trigger);
} ;
class raw_event_event
{
  raw_event_event_trigger
       trigger;
  STRUCT_FCNS_DECL(raw_event_event);
} ;
class raw_event_hit
{
  DATA16 pattern;
  STRUCT_FCNS_DECL(raw_event_hit);
} ;
class raw_event_num_channels
{
  DATA32 fired;
  STRUCT_FCNS_DECL(raw_event_num_channels);
} ;
class raw_event_num
{
  raw_event_num_channels
       channels;
  STRUCT_FCNS_DECL(raw_event_num);
} ;
class raw_event_channel_trigger_time
{
  DATA16 hi[16];
  DATA32 lo[16];
  STRUCT_FCNS_DECL(raw_event_channel_trigger_time);
} ;
class raw_event_channel_trigger
{
  raw_event_channel_trigger_time
       time;
  STRUCT_FCNS_DECL(raw_event_channel_trigger);
} ;
class raw_event_channel
{
  DATA8 id[16];
  raw_event_channel_trigger
       trigger;
  DATA32 energy[16];
  STRUCT_FCNS_DECL(raw_event_channel);
} ;
class raw_event : public raw_event_base
{
  raw_event_wr
       wr;
  raw_event_board
       board;
  raw_event_event
       event;
  raw_event_hit
       hit;
  raw_event_num
       num;
  DATA8 pileup[16];
  DATA8 overflow[16];
  raw_event_channel
       channel;
  STRUCT_FCNS_DECL(raw_event);
} ;
class raw_sticky : public raw_sticky_base
{
  STRUCT_FCNS_DECL(raw_sticky);
} ;
