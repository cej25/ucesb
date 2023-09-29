/** BEGIN_EVENT_RAW_STRUCTURE ******************************************
 *
 * Event data structure.
 *
 * Do not edit - automatically generated.
 */

class raw_event_wr_subsystem
{
public:
  DATA12 id;

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_wr_subsystem);
#endif//!__PSDC__
} ;

class raw_event_wr
{
public:
  raw_event_wr_subsystem
  /* {
  public:
    DATA12 id;
  } */ subsystem;
//DUMPY: 4 0
  DATA16 t[4];

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_wr);
#endif//!__PSDC__
} ;

class raw_event_board
{
public:
  DATA8 id;

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_board);
#endif//!__PSDC__
} ;

class raw_event_event_trigger_time
{
public:
  DATA32 hi;
  DATA32 lo;

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_event_trigger_time);
#endif//!__PSDC__
} ;

class raw_event_event_trigger
{
public:
  raw_event_event_trigger_time
  /* {
  public:
    DATA32 hi;
    DATA32 lo;
  } */ time;

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_event_trigger);
#endif//!__PSDC__
} ;

class raw_event_event
{
public:
  raw_event_event_trigger
  /* {
  public:
    raw_event_event_trigger_time
    {
    public:
      DATA32 hi;
      DATA32 lo;
    } time;
  } */ trigger;

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_event);
#endif//!__PSDC__
} ;

class raw_event_hit
{
public:
  DATA16 pattern;

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_hit);
#endif//!__PSDC__
} ;

class raw_event_num_channels
{
public:
  DATA32 fired;

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_num_channels);
#endif//!__PSDC__
} ;

class raw_event_num
{
public:
  raw_event_num_channels
  /* {
  public:
    DATA32 fired;
  } */ channels;

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_num);
#endif//!__PSDC__
} ;

class raw_event_channel_trigger_time
{
public:
//DUMPY: 16 0
  DATA16 hi[16];
//DUMPY: 16 0
  DATA32 lo[16];

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_channel_trigger_time);
#endif//!__PSDC__
} ;

class raw_event_channel_trigger
{
public:
  raw_event_channel_trigger_time
  /* {
  public:
//DUMPY: 16 0
    DATA16 hi[16];
//DUMPY: 16 0
    DATA32 lo[16];
  } */ time;

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_channel_trigger);
#endif//!__PSDC__
} ;

class raw_event_channel
{
public:
//DUMPY: 16 0
  DATA8 id[16];
  raw_event_channel_trigger
  /* {
  public:
    raw_event_channel_trigger_time
    {
    public:
//DUMPY: 16 0
      DATA16 hi[16];
//DUMPY: 16 0
      DATA32 lo[16];
    } time;
  } */ trigger;
//DUMPY: 16 0
  DATA32 energy[16];

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event_channel);
#endif//!__PSDC__
} ;

class raw_event : public raw_event_base
{
public:
  raw_event_wr
  /* {
  public:
    raw_event_wr_subsystem
    {
    public:
      DATA12 id;
    } subsystem;
//DUMPY: 4 0
    DATA16 t[4];
  } */ wr;
  raw_event_board
  /* {
  public:
    DATA8 id;
  } */ board;
  raw_event_event
  /* {
  public:
    raw_event_event_trigger
    {
    public:
      raw_event_event_trigger_time
      {
      public:
        DATA32 hi;
        DATA32 lo;
      } time;
    } trigger;
  } */ event;
  raw_event_hit
  /* {
  public:
    DATA16 pattern;
  } */ hit;
  raw_event_num
  /* {
  public:
    raw_event_num_channels
    {
    public:
      DATA32 fired;
    } channels;
  } */ num;
//DUMPY: 16 0
  DATA8 pileup[16];
//DUMPY: 16 0
  DATA8 overflow[16];
  raw_event_channel
  /* {
  public:
//DUMPY: 16 0
    DATA8 id[16];
    raw_event_channel_trigger
    {
    public:
      raw_event_channel_trigger_time
      {
      public:
//DUMPY: 16 0
        DATA16 hi[16];
//DUMPY: 16 0
        DATA32 lo[16];
      } time;
    } trigger;
//DUMPY: 16 0
    DATA32 energy[16];
  } */ channel;

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_event);
#endif//!__PSDC__
} ;

/** END_EVENT_RAW_STRUCTURE *******************************************/
/** BEGIN_EVENT_RAW_STRUCTURE ******************************************
 *
 * Event data structure.
 *
 * Do not edit - automatically generated.
 */

class raw_sticky : public raw_sticky_base
{
public:

public:
#ifndef __PSDC__
  STRUCT_FCNS_DECL(raw_sticky);
#endif//!__PSDC__
} ;

/** END_EVENT_RAW_STRUCTURE *******************************************/
