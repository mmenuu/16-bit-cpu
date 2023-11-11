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
static const char *ng0 = "D:/digiCom3/digiProject/memory.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

int ieee_p_1242562249_sub_1657552908_1035706684(char *, char *, char *);
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_0606318341_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned char t12;
    int t13;
    int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    int t18;

LAB0:    xsi_set_current_line(24, ng0);
    t1 = (t0 + 2528U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)1);
    if (t4 != 0)
        goto LAB2;

LAB4:
LAB3:    xsi_set_current_line(41, ng0);
    t1 = (t0 + 3976);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(43, ng0);
    t1 = (t0 + 992U);
    t4 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t4 == 1)
        goto LAB22;

LAB23:    t3 = (unsigned char)0;

LAB24:    if (t3 != 0)
        goto LAB19;

LAB21:
LAB20:    t1 = (t0 + 3832);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(26, ng0);
    t1 = (t0 + 22769);
    t6 = (16U != 16U);
    if (t6 == 1)
        goto LAB5;

LAB6:    t7 = (t0 + 3912);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 16U);
    xsi_driver_first_trans_delta(t7, 0U, 16U, 0LL);
    xsi_set_current_line(27, ng0);
    t1 = (t0 + 22785);
    t3 = (16U != 16U);
    if (t3 == 1)
        goto LAB7;

LAB8:    t5 = (t0 + 3912);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 16U);
    xsi_driver_first_trans_delta(t5, 16U, 16U, 0LL);
    xsi_set_current_line(28, ng0);
    t1 = (t0 + 22801);
    t3 = (16U != 16U);
    if (t3 == 1)
        goto LAB9;

LAB10:    t5 = (t0 + 3912);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 16U);
    xsi_driver_first_trans_delta(t5, 32U, 16U, 0LL);
    xsi_set_current_line(29, ng0);
    t1 = (t0 + 22817);
    t3 = (16U != 16U);
    if (t3 == 1)
        goto LAB11;

LAB12:    t5 = (t0 + 3912);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 16U);
    xsi_driver_first_trans_delta(t5, 48U, 16U, 0LL);
    xsi_set_current_line(33, ng0);
    t1 = (t0 + 22833);
    t3 = (16U != 16U);
    if (t3 == 1)
        goto LAB13;

LAB14:    t5 = (t0 + 3912);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 16U);
    xsi_driver_first_trans_delta(t5, 64U, 16U, 0LL);
    xsi_set_current_line(34, ng0);
    t1 = (t0 + 22849);
    t3 = (16U != 16U);
    if (t3 == 1)
        goto LAB15;

LAB16:    t5 = (t0 + 3912);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 16U);
    xsi_driver_first_trans_delta(t5, 80U, 16U, 0LL);
    xsi_set_current_line(35, ng0);
    t1 = (t0 + 22865);
    t3 = (16U != 16U);
    if (t3 == 1)
        goto LAB17;

LAB18:    t5 = (t0 + 3912);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 16U);
    xsi_driver_first_trans_delta(t5, 112U, 16U, 0LL);
    xsi_set_current_line(37, ng0);
    t1 = (t0 + 2528U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((unsigned char *)t1) = (unsigned char)0;
    goto LAB3;

LAB5:    xsi_size_not_matching(16U, 16U, 0);
    goto LAB6;

LAB7:    xsi_size_not_matching(16U, 16U, 0);
    goto LAB8;

LAB9:    xsi_size_not_matching(16U, 16U, 0);
    goto LAB10;

LAB11:    xsi_size_not_matching(16U, 16U, 0);
    goto LAB12;

LAB13:    xsi_size_not_matching(16U, 16U, 0);
    goto LAB14;

LAB15:    xsi_size_not_matching(16U, 16U, 0);
    goto LAB16;

LAB17:    xsi_size_not_matching(16U, 16U, 0);
    goto LAB18;

LAB19:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1512U);
    t7 = *((char **)t2);
    t2 = (t0 + 6284U);
    t13 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t7, t2);
    t8 = (t0 + 2408U);
    t9 = *((char **)t8);
    t8 = (t9 + 0);
    *((int *)t8) = t13;
    xsi_set_current_line(46, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB25;

LAB27:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB31;

LAB32:    xsi_set_current_line(59, ng0);
    t1 = xsi_get_transient_memory(16U);
    memset(t1, 0, 16U);
    t2 = t1;
    memset(t2, (unsigned char)4, 16U);
    t5 = (t0 + 4040);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 16U);
    xsi_driver_first_trans_fast_port(t5);

LAB26:    goto LAB20;

LAB22:    t2 = (t0 + 1032U);
    t5 = *((char **)t2);
    t6 = *((unsigned char *)t5);
    t12 = (t6 == (unsigned char)3);
    t3 = t12;
    goto LAB24;

LAB25:    xsi_set_current_line(47, ng0);
    t1 = (t0 + 3976);
    t5 = (t1 + 56U);
    t7 = *((char **)t5);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(48, ng0);
    t1 = (t0 + 2408U);
    t2 = *((char **)t1);
    t13 = *((int *)t2);
    t3 = (t13 >= 1024);
    if (t3 != 0)
        goto LAB28;

LAB30:    xsi_set_current_line(51, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t1 = (t0 + 2408U);
    t5 = *((char **)t1);
    t13 = *((int *)t5);
    t14 = (t13 - 0);
    t15 = (t14 * 1);
    xsi_vhdl_check_range_of_index(0, 1023, 1, t13);
    t16 = (16U * t15);
    t17 = (0 + t16);
    t1 = (t2 + t17);
    t7 = (t0 + 4040);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 16U);
    xsi_driver_first_trans_fast_port(t7);

LAB29:    goto LAB26;

LAB28:    xsi_set_current_line(49, ng0);
    t1 = xsi_get_transient_memory(16U);
    memset(t1, 0, 16U);
    t5 = t1;
    memset(t5, (unsigned char)4, 16U);
    t7 = (t0 + 4040);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 16U);
    xsi_driver_first_trans_fast_port(t7);
    goto LAB29;

LAB31:    xsi_set_current_line(54, ng0);
    t1 = (t0 + 3976);
    t5 = (t1 + 56U);
    t7 = *((char **)t5);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(55, ng0);
    t1 = (t0 + 2408U);
    t2 = *((char **)t1);
    t13 = *((int *)t2);
    t3 = (t13 < 1024);
    if (t3 != 0)
        goto LAB33;

LAB35:
LAB34:    goto LAB26;

LAB33:    xsi_set_current_line(56, ng0);
    t1 = (t0 + 1672U);
    t5 = *((char **)t1);
    t1 = (t0 + 2408U);
    t7 = *((char **)t1);
    t14 = *((int *)t7);
    t18 = (t14 - 0);
    t15 = (t18 * 1);
    t16 = (16U * t15);
    t17 = (0U + t16);
    t1 = (t0 + 3912);
    t8 = (t1 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t5, 16U);
    xsi_driver_first_trans_delta(t1, t17, 16U, 0LL);
    goto LAB34;

}


extern void work_a_0606318341_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0606318341_3212880686_p_0};
	xsi_register_didat("work_a_0606318341_3212880686", "isim/SayehComputer_isim_beh.exe.sim/work/a_0606318341_3212880686.didat");
	xsi_register_executes(pe);
}
