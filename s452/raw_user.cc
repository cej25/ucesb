#include "structures.hh"
#include <math.h>
#include <stdint.h> // probably not needed

void frs_unpack_to_raw_map(float &unpack, float &raw)
{   
    // conditions to be added later
    // actually this separate function must not be needed. only for foot more complicated stuff
    raw = unpack;
}


void raw_user_function(unpack_event *event, raw_event *raw_event)
{   

    raw_event->GeFired = event->germanium.data.febex_info.Ge_Fired;
    // for (int i = 0; i < raw_event->GeFired; i++)
    for (int i = 0; i < 28; i++)
    {
        raw_event->Sum.Time.lo[i] = event->germanium.data.febex_info.Sum_Time_lo[i];
        raw_event->Sum.Time.hi[i] = event->germanium.data.febex_info.Sum_Time_hi[i];
        raw_event->Hit.Pattern[i] = event->germanium.data.febex_info.Hit_Pattern[i];
        raw_event->Chan.Time.lo[i] = event->germanium.data.febex_info.Chan_Time_lo[i];
        raw_event->Chan.Time.hi[i] = event->germanium.data.febex_info.Chan_Time_hi[i];
        raw_event->Chan.Energy[i] = event->germanium.data.febex_info.Chan_Energy[i]; 
        raw_event->Chan.CF.lo[i] = event->germanium.data.febex_info.Chan_CF_lo[i];
        raw_event->Chan.CF.hi[i] = event->germanium.data.febex_info.Chan_CF_hi[i];
        raw_event->Pileup[i] = event->germanium.data.febex_info.Pileup[i];
        raw_event->Overflow[i] = event->germanium.data.febex_info.Overflow[i];
        raw_event->det.ids[i] = event->germanium.data.febex_info.det_ids[i];
        raw_event->crystal.ids[i] = event->germanium.data.febex_info.crystal_ids[i];       
    }

    //raw_event->Sum.Time.lo = event->germanium.data.febex_info.Sum_Time_lo;

    /*for (int i = 0; i < 21; i++)
    {
        for (int j = 0; j < 32; j++)
        {
            raw_event->VME.MAIN[i][j] = event->frs_crate.data.frs_info.vme_main[i][j];
            raw_event->VME.MAIN[i][j] = event->frs_tpc_crate.data.frs_info.vme_main[i][j];
        }
        
    }*/

    // these ones are definitely frs_crate
    /*raw_event->Z = event->frs_crate.data.frs_info.id_z;
    //frs_unpack_to_raw_map(event->frs_crate.data.frs_info.id_z, raw_event->Z);
    frs_unpack_to_raw_map(event->frs_crate.data.frs_info.id_AoQ, raw_event->AoQ);
    frs_unpack_to_raw_map(event->frs_crate.data.frs_info.id_beta, raw_event->beta);
    // tpc crate? something else?
    frs_unpack_to_raw_map(event->frs_tpc_crate.data.frs_info.id_x2, raw_event->Xtwo);
    frs_unpack_to_raw_map(event->frs_tpc_crate.data.frs_info.id_x4, raw_event->Xfour);
    frs_unpack_to_raw_map(event->frs_tpc_crate.data.frs_info.id_a2, raw_event->Atwo);
    frs_unpack_to_raw_map(event->frs_tpc_crate.data.frs_info.id_a4, raw_event->Afour);*/


   /* frs_unpack_to_raw_map(event->frs_tpc_crate.data.frs_info.tpc_x[2], raw_event->tpc.X.two);
    frs_unpack_to_raw_map(event->frs_tpc_crate.data.frs_info.tpc_x[3], raw_event->tpc.X.three);
    frs_unpack_to_raw_map(event->frs_tpc_crate.data.frs_info.tpc_y[2], raw_event->tpc.Y.two);
    frs_unpack_to_raw_map(event->frs_tpc_crate.data.frs_info.tpc_y[3], raw_event->tpc.Y.three);*/
}
