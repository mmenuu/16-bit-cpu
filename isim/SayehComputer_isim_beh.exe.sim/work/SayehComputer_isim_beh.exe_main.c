/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

#include "xsi.h"

struct XSI_INFO xsi_info;

char *IEEE_P_2592010699;
char *STD_STANDARD;
char *IEEE_P_1242562249;


int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    ieee_p_2592010699_init();
    ieee_p_1242562249_init();
    work_a_0606318341_3212880686_init();
    work_a_3887739238_1516540902_init();
    work_a_0832606739_1516540902_init();
    work_a_1472987919_1516540902_init();
    work_a_0018936630_1516540902_init();
    work_a_1583994426_1516540902_init();
    work_a_1633989628_1516540902_init();
    work_a_1627867094_1516540902_init();
    work_a_2399776393_1516540902_init();
    work_a_1710397419_1516540902_init();
    work_a_1422650982_1516540902_init();
    work_a_1631955042_1516540902_init();


    xsi_register_tops("work_a_1631955042_1516540902");

    IEEE_P_2592010699 = xsi_get_engine_memory("ieee_p_2592010699");
    xsi_register_ieee_std_logic_1164(IEEE_P_2592010699);
    STD_STANDARD = xsi_get_engine_memory("std_standard");
    IEEE_P_1242562249 = xsi_get_engine_memory("ieee_p_1242562249");

    return xsi_run_simulation(argc, argv);

}
