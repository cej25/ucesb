// -*- C++ -*-

#include "aida_data.spec"
//#include "germanium_data.spec"
//#include "plastic_data.spec"
#include "fatima_data.spec"
#include "frs_data.spec"
#include "whiterabbit.spec"

external EXT_AIDA();
external EXT_GERMANIUM();
external EXT_FATIMA_VME();
external EXT_FATIMA_TAMEX();

DUMMY()
{
  UINT32 no NOENCODE;
}

SUBEVENT(aida_subev)
{
  ts = TIMESTAMP_WHITERABBIT(id=0x700);
  external data = EXT_AIDA();
  //subev = AIDA();
}

SUBEVENT(germanium_subev)
{
  ts = TIMESTAMP_WHITERABBIT(id=0x400);
  //subev = GERMANIUM();
  external data = EXT_GERMANIUM();

}


SUBEVENT(plastic_subev)
{
  ts = TIMESTAMP_WHITERABBIT(id=0x500);
  //subev = PLASTIC();
}


SUBEVENT(fatima_vme_subev)
{
  ts = TIMESTAMP_WHITERABBIT_EXTENDED(id=0x1500);
  //subev = FATIMA_VME();
  external data = EXT_FATIMA_VME();
}

SUBEVENT(fatima_tamex_subev)
{
  ts = TIMESTAMP_WHITERABBIT_EXTENDED(id=0x1600);
  external data = EXT_FATIMA_TAMEX();
}

SUBEVENT(frs_subev1)
{
  ts = TIMESTAMP_WHITERABBIT(id=0x100);
  subev = FRS();
}

SUBEVENT(frs_main_subev)
{
  //ts = TIMESTAMP_WHITERABBIT(id=0x100);
  select several
  {
    subev = FRS_MAIN();
  }
}

SUBEVENT(frs_tpat_subev)
{
  //ts = TIMESTAMP_WHITERABBIT(id=0x100);
  //subev = FRS_TPAT();

  dummy = DUMMY();
  tpat = TRLOII_TPAT(id = 0xcf);
}

SUBEVENT(frs_subev4)
{
  ts = TIMESTAMP_WHITERABBIT(id=0x100);
  subev = FRS();
}

SUBEVENT(frs_frs_subev)
{
  //ts = TIMESTAMP_WHITERABBIT(id=0x100);
  select several
  {
    subev = FRS_FRS();
  }
}

SUBEVENT(frs_subev6)
{
  ts = TIMESTAMP_WHITERABBIT(id=0x100);
  subev = FRS();
}

EVENT
{ 
  // test below here
  //germanium = germanium_subev(procid = 60);
  // test above here


  germanium = germanium_subev(type = 10, subtype = 1, procid = 60, control = 20, subcrate = 0);
  //plastic = plastic_subev(type = 10, subtype = 1, procid = 80, control = 20, subcrate = 0);
  fatima_vme = fatima_vme_subev(type = 10, subtype = 1, procid = 70, control = 20, subcrate = 0);
  fatima_tamex = fatima_tamex_subev(type = 10, subtype = 1, procid = 75, control = 20, subcrate = 0);
  aida = aida_subev(type = 10, subtype = 1, procid = 90, control = 37, subcrate = 0);

  /* needs better/proper naming */
  //frs_1 = frs_subev1(type = 10, subtype = 1, procid = 10, control = 20, subcrate = 0);
  frs_main = frs_main_subev(type = 12, subtype = 1, procid = 10, control = 20, subcrate = 0); // frs main
  frs_tpat = frs_tpat_subev(type = 36, subtype = 3600, procid = 10, control = 20, subcrate = 0); // frs tpat
  //frs_4 = frs_subev4(type = 12, subtype = 1, procid = 35, control = 20, subcrate = 0);
  frs_frs = frs_frs_subev(type = 12, subtype = 1, procid = 30, control = 20, subcrate = 0); // frs frs?
  //frs_6 = frs_subev6(type = 12, subtype = 1, procid = 20, control = 21, subcrate = 0);

  ignore_unknown_subevent;
}

//#include "mapping_aida.hh"
//#include "mapping_germanium.hh"
//#include "mapping_plastic.hh"
//#include "mapping_fatima.hh"
//#include "test_aida_mapping.hh"