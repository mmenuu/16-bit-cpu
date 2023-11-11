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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "D:/digiCom3/digiProject/sayehComputer.vhd";



static void work_a_1631955042_1516540902_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    int64 t12;
    int64 t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    t1 = (t0 + 3752U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(55, ng0);

LAB4:    t2 = (t0 + 2312U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (!(t4));
    if (t5 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(60, ng0);

LAB14:    t2 = (t0 + 4072);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB15;

LAB1:    return;
LAB5:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 4152);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_delta(t2, 0U, 1, 0LL);
    t10 = (t0 + 2768U);
    t11 = *((char **)t10);
    t12 = *((int64 *)t11);
    t13 = (t12 / 2);
    t10 = (t0 + 4152);
    t14 = (t10 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = (unsigned char)3;
    xsi_driver_subsequent_trans_delta(t10, 0U, 1, t13);
    xsi_set_current_line(58, ng0);
    t2 = (t0 + 2768U);
    t3 = *((char **)t2);
    t12 = *((int64 *)t3);
    t2 = (t0 + 3560);
    xsi_process_wait(t2, t12);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB6:;
LAB8:    goto LAB4;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    t3 = (t0 + 4072);
    *((int *)t3) = 0;
    goto LAB2;

LAB13:    t3 = (t0 + 2312U);
    t6 = *((char **)t3);
    t4 = *((unsigned char *)t6);
    if (t4 == 1)
        goto LAB12;
    else
        goto LAB14;

LAB15:    goto LAB13;

}


extern void work_a_1631955042_1516540902_init()
{
	static char *pe[] = {(void *)work_a_1631955042_1516540902_p_0};
	xsi_register_didat("work_a_1631955042_1516540902", "isim/SayehComputer_isim_beh.exe.sim/work/a_1631955042_1516540902.didat");
	xsi_register_executes(pe);
}
