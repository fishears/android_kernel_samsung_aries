/* arch/arm/mach-s5pv210/include/mach/voltages.h
*
* Copyright (c) 2010 Samsung Electronics Co., Ltd.
*
* S5PV210/S5PC110 CPU frequency scaling support
*
* This program is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License version 2 as
* published by the Free Software Foundation.
*/

#ifndef __ASM_ARCH_VOLTAGES_H
#define __ASM_ARCH_VOLTAGES_H

// these 2 are always the same
#define ARMVOLT 1400000
#define INTVOLT 1250000

// these are all the same, too!
#define DVSARM1 1350000 //1400
#define DVSARM2 1325000 //1300
#define DVSARM3 1275000 //1200, 1100
#define DVSARM4 1275000 //1000
#define DVSARM5 1200000 //800
#define DVSARM6 1050000 //400
#define DVSARM7 950000 //200
#define DVSARM8 950000  //100

#define ARMBOOT 1250000
#define INTBOOT 1100000

#define DVSINT1 1175000 //1400
#define DVSINT2 1150000 //1300
#define DVSINT3 1100000 //1200, 1100
#define DVSINT4 1100000 //1000
#define DVSINT5 1100000 //200, 400, 800
#define DVSINT6 1000000 //100


#endif /* __ASM_ARCH_VOLTAGES_H */
