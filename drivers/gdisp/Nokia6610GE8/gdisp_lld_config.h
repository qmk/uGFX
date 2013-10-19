/*
 * This file is subject to the terms of the GFX License. If a copy of
 * the license was not distributed with this file, you can obtain one at:
 *
 *              http://ugfx.org/license.html
 */

/**
 * @file    drivers/gdisp/Nokia6610GE8/gdisp_lld_config.h
 * @brief   GDISP Graphic Driver subsystem low level driver header for the Nokia6610 GE8 display.
 *
 * @addtogroup GDISP
 * @{
 */

#ifndef _GDISP_LLD_CONFIG_H
#define _GDISP_LLD_CONFIG_H

#if GFX_USE_GDISP 

/*===========================================================================*/
/* Driver hardware support.                                                  */
/*===========================================================================*/

/* This driver has problems with other orientations and requires significantly
 * extra code to handle them. By default we turn this on (only if the GDISP_NEED_CONTROL
 * is turned on). If you are worried about code size and don't need orientation support
 * define GDISP_NOKIA_ORIENTATION as false.
 */
#ifndef GDISP_NOKIA_ORIENTATION
	#define GDISP_NOKIA_ORIENTATION			TRUE
#endif

#if GDISP_NOKIA_ORIENTATION && GDISP_NEED_CONTROL
	#define GDISP_HARDWARE_CONTROL			TRUE
	#define GDISP_HARDWARE_DRAWPIXEL		TRUE
	#define GDISP_HARDWARE_FILLS			TRUE
	#define GDISP_HARDWARE_BITFILLS			TRUE
#else
	#define GDISP_HARDWARE_CONTROL			TRUE
	#define GDISP_HARDWARE_STREAM_WRITE		TRUE
#endif

#define GDISP_PIXELFORMAT				GDISP_PIXELFORMAT_RGB444

#endif	/* GFX_USE_GDISP */

#endif	/* _GDISP_LLD_CONFIG_H */
/** @} */
