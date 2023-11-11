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
static const char *ng0 = "D:/digiCom3/digiProject/Datapath.vhd";



static void work_a_2399776393_1516540902_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned char t12;
    unsigned char t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;

LAB0:    xsi_set_current_line(131, ng0);
    t1 = (t0 + 4392U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB3;

LAB4:    t10 = (t0 + 4552U);
    t11 = *((char **)t10);
    t12 = *((unsigned char *)t11);
    t13 = (t12 == (unsigned char)3);
    if (t13 != 0)
        goto LAB5;

LAB6:
LAB7:    t19 = (t0 + 17825);
    t21 = (t0 + 12168);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memcpy(t25, t19, 16U);
    xsi_driver_first_trans_fast(t21);

LAB2:    t26 = (t0 + 11944);
    *((int *)t26) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 7272U);
    t5 = *((char **)t1);
    t1 = (t0 + 12168);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 16U);
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB5:    t10 = (t0 + 7432U);
    t14 = *((char **)t10);
    t10 = (t0 + 12168);
    t15 = (t10 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t14, 16U);
    xsi_driver_first_trans_fast(t10);
    goto LAB2;

LAB8:    goto LAB2;

}

static void work_a_2399776393_1516540902_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned char t12;
    unsigned char t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;

LAB0:    xsi_set_current_line(135, ng0);
    t1 = (t0 + 4712U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB3;

LAB4:    t10 = (t0 + 4872U);
    t11 = *((char **)t10);
    t12 = *((unsigned char *)t11);
    t13 = (t12 == (unsigned char)3);
    if (t13 != 0)
        goto LAB5;

LAB6:
LAB7:    t19 = xsi_get_transient_memory(16U);
    memset(t19, 0, 16U);
    t20 = t19;
    memset(t20, (unsigned char)4, 16U);
    t21 = (t0 + 12232);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memcpy(t25, t19, 16U);
    xsi_driver_first_trans_fast_port(t21);

LAB2:    t26 = (t0 + 11960);
    *((int *)t26) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 7912U);
    t5 = *((char **)t1);
    t1 = (t0 + 12232);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 16U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

LAB5:    t10 = (t0 + 6152U);
    t14 = *((char **)t10);
    t10 = (t0 + 12232);
    t15 = (t10 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t14, 16U);
    xsi_driver_first_trans_fast_port(t10);
    goto LAB2;

LAB8:    goto LAB2;

}

static void work_a_2399776393_1516540902_p_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(139, ng0);

LAB3:    t1 = (t0 + 7912U);
    t2 = *((char **)t1);
    t1 = (t0 + 12296);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 16U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 11976);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2399776393_1516540902_p_3(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned char t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;

LAB0:    xsi_set_current_line(141, ng0);
    t1 = (t0 + 5032U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t14 = (t0 + 17841);
    t16 = (8U != 8U);
    if (t16 == 1)
        goto LAB7;

LAB8:    t17 = (t0 + 12360);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t14, 8U);
    xsi_driver_first_trans_delta(t17, 8U, 8U, 0LL);

LAB2:    t22 = (t0 + 11992);
    *((int *)t22) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 6952U);
    t5 = *((char **)t1);
    t6 = (15 - 7);
    t7 = (t6 * 1U);
    t8 = (0 + t7);
    t1 = (t5 + t8);
    t9 = (t0 + 12360);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t1, 8U);
    xsi_driver_first_trans_delta(t9, 8U, 8U, 0LL);
    goto LAB2;

LAB6:    goto LAB2;

LAB7:    xsi_size_not_matching(8U, 8U, 0);
    goto LAB8;

}

static void work_a_2399776393_1516540902_p_4(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned char t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;

LAB0:    xsi_set_current_line(144, ng0);
    t1 = (t0 + 5192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t14 = (t0 + 17849);
    t16 = (8U != 8U);
    if (t16 == 1)
        goto LAB7;

LAB8:    t17 = (t0 + 12424);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t14, 8U);
    xsi_driver_first_trans_delta(t17, 0U, 8U, 0LL);

LAB2:    t22 = (t0 + 12008);
    *((int *)t22) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 6952U);
    t5 = *((char **)t1);
    t6 = (15 - 7);
    t7 = (t6 * 1U);
    t8 = (0 + t7);
    t1 = (t5 + t8);
    t9 = (t0 + 12424);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t1, 8U);
    xsi_driver_first_trans_delta(t9, 0U, 8U, 0LL);
    goto LAB2;

LAB6:    goto LAB2;

LAB7:    xsi_size_not_matching(8U, 8U, 0);
    goto LAB8;

}

static void work_a_2399776393_1516540902_p_5(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    xsi_set_current_line(147, ng0);
    t1 = (t0 + 5352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t10 = (t0 + 17857);
    t12 = (t0 + 12488);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t10, 16U);
    xsi_driver_first_trans_fast(t12);

LAB2:    t17 = (t0 + 12024);
    *((int *)t17) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 7432U);
    t5 = *((char **)t1);
    t1 = (t0 + 12488);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 16U);
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_2399776393_1516540902_p_6(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(150, ng0);

LAB3:    t1 = (t0 + 6312U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 12552);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 12040);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2399776393_1516540902_p_7(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(152, ng0);

LAB3:    t1 = (t0 + 6472U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 12616);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 12056);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2399776393_1516540902_p_8(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;

LAB0:    xsi_set_current_line(154, ng0);
    t1 = (t0 + 5512U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t14 = (t0 + 6952U);
    t15 = *((char **)t14);
    t16 = (15 - 7);
    t17 = (t16 * 1U);
    t18 = (0 + t17);
    t14 = (t15 + t18);
    t19 = (t0 + 12680);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t14, 8U);
    xsi_driver_first_trans_fast_port(t19);

LAB2:    t24 = (t0 + 12072);
    *((int *)t24) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 6952U);
    t5 = *((char **)t1);
    t6 = (15 - 15);
    t7 = (t6 * 1U);
    t8 = (0 + t7);
    t1 = (t5 + t8);
    t9 = (t0 + 12680);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t1, 8U);
    xsi_driver_first_trans_fast_port(t9);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_2399776393_1516540902_p_9(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;

LAB0:    xsi_set_current_line(157, ng0);
    t1 = (t0 + 5512U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t14 = (t0 + 6952U);
    t15 = *((char **)t14);
    t16 = (15 - 3);
    t17 = (t16 * 1U);
    t18 = (0 + t17);
    t14 = (t15 + t18);
    t19 = (t0 + 12744);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t14, 4U);
    xsi_driver_first_trans_fast(t19);

LAB2:    t24 = (t0 + 12088);
    *((int *)t24) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 6952U);
    t5 = *((char **)t1);
    t6 = (15 - 11);
    t7 = (t6 * 1U);
    t8 = (0 + t7);
    t1 = (t5 + t8);
    t9 = (t0 + 12744);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t1, 4U);
    xsi_driver_first_trans_fast(t9);
    goto LAB2;

LAB6:    goto LAB2;

}


extern void work_a_2399776393_1516540902_init()
{
	static char *pe[] = {(void *)work_a_2399776393_1516540902_p_0,(void *)work_a_2399776393_1516540902_p_1,(void *)work_a_2399776393_1516540902_p_2,(void *)work_a_2399776393_1516540902_p_3,(void *)work_a_2399776393_1516540902_p_4,(void *)work_a_2399776393_1516540902_p_5,(void *)work_a_2399776393_1516540902_p_6,(void *)work_a_2399776393_1516540902_p_7,(void *)work_a_2399776393_1516540902_p_8,(void *)work_a_2399776393_1516540902_p_9};
	xsi_register_didat("work_a_2399776393_1516540902", "isim/SayehComputer_isim_beh.exe.sim/work/a_2399776393_1516540902.didat");
	xsi_register_executes(pe);
}
