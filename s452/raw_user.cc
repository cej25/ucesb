#include "config/setup.hh"

#include "structures.hh"
#include <math.h>
#include <stdint.h> // probably not needed


void raw_user_function(unpack_event *event, raw_event *raw_event)
{   

    /*if (FRS_USED)
    {   
       
        int multihit = 0;
        int nhit_v1290[32][2];
        for (int i = 0; i < 32; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                nhit_v1290[i][j] = 0;
            }
        }

        // first loop = 32. this is multi hit.
        // we will discard anything above 9 (>=10)
        // but we can have up to 32 i suppose?
        // second loop is the channel, i guess. again 32.
        // maybe we don't need 2 loops, just 2 indices?
        for (int i = 0; i <32; i++)
        {
            int chn = event->frs_main_crate.v1290.channel._items[i].value;
            int lot = event->frs_main_crate.v1290.leadOrTrail._items[i].value;
            int value = event->frs_main_crate.v1290.data._items[chn][i].value;
            multihit = nhit_v1290[chn][lot];

            if (multihit > 9)
            {
                continue;
            }

            if (lot == 0)
            {
                if (value > 0)
                {
                    raw_event->lead.vtn[chn][multihit] = value;
                }
            }
            else
            {
                if (value > 0)
                {
                    raw_event->trail.vtn[chn][multihit] = value;
                }
            }
        }
        
        // frs mapping


    }*/

    if (FRS_USED)
    {   

        // I think perhaps "sorting" can mostly be done here, rather than having this function.?


        // can probably skip a step here (unpack -> sort seems to just set these as equal anyway)
        raw_event->TRIGGER = event->frs_tpat.data.frs_info.trigger;
        raw_event->PATTERN = event->frs_tpat.data.frs_info.pattern;
        raw_event->SPTRIGGER = event->frs_tpat.data.frs_info.sptrigger;
        raw_event->SNBTRIG = event->frs_tpat.data.frs_info.snbtrig; 
        raw_event->SMAXTRIG = event->frs_tpat.data.frs_info.smaxtrig;
        

        for (int i = 0; i < 32; i++)
        {
            raw_event->SCLONG[i] = event->frs_crate.data.frs_info.scaler_frs[i];
            raw_event->SCLONG[i+32] = event->frs_main_crate.data.frs_info.scaler_main[i]; 
        }

    }

    if (GERMANIUM_USED)
    {
        /*// germanium mapping
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
        }*/
    }

    if (FATIMA_USED)
    {
        // fatima vme mapping
        // fatima tamex mapping
    }

    if (BPLAST_USED)
    {
        // bplast mapping
    }

    if (AIDA_USED)
    {
        // aida mapping
    }

}
