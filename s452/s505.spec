// -*- C++ -*-
#include "gsi_tamex4.spec"
// #include "gsi_febex_v2.spec"
#include "whiterabbit.spec"

external EXT_AIDA();


TAMEX_SFP(sfp)
{
    select several {
	card[0] = TAMEX4_SFP(sfp = sfp, card = 0);
	card[1] = TAMEX4_SFP(sfp = sfp, card = 1);
	card[2] = TAMEX4_SFP(sfp = sfp, card = 2);
	card[3] = TAMEX4_SFP(sfp = sfp, card = 3);
	card[4] = TAMEX4_SFP(sfp = sfp, card = 4);
    }
}

SUBEVENT(febex_ge)
{
    wr = TIMESTAMP_WHITERABBIT(id=0x400);
    //header = FEBEX_EVENTHEADER();
    select several {
	padding = FEBEX_PADDING();
    }
    select several {
	febex_0[ 0] = FEBEX_NOTRACE(sfp=0, card=0);
	febex_0[ 1] = FEBEX_NOTRACE(sfp=0, card=1);
	febextrace_0[ 0] = FEBEX_TRACE(sfp=0, card=0);
	febextrace_0[ 1] = FEBEX_TRACE(sfp=0, card=1);
    }
}

SUBEVENT(tamex_pcie)
{
    //wr = TIMESTAMP_WHITERABBIT(id=0x500);
    header = TAMEX4_HEADER();
    select several {
	padding = TAMEX4_PADDING();
    }
    select several {
	crate[0] = TAMEX_SFP(sfp=0);
    }
}

SUBEVENT(aida_se)
{
    wr = TIMESTAMP_WHITERABBIT(id=0x700);
    external data = EXT_AIDA();
}

SUBEVENT(frs_vetar)
{
    wr = TIMESTAMP_WHITERABBIT(id=0x100);
}

SUBEVENT(dummy)
{
}

EVENT
{
    // revisit frs_wr = frs_vetar(type = 10, subtype = 1, procid = 10);
    revisit bplas = tamex_pcie(type = 10, subtype = 1, procid = 80);
    // revisit hpge = febex_ge(type = 10, subtype = 1, procid = 60);
    // revisit aida = aida_se(type = 10, subtype = 1, procid = 90);
    ignore_unknown_subevent;
}

#include "mapping.hh"
