/******************************************************************************
 *
 * Copyright(c) 2007 - 2011 Realtek Corporation. All rights reserved.
 *                                        
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of version 2 of the GNU General Public License as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110, USA
 *
 *
 ******************************************************************************/

#ifndef	__PHYDM_FEATURES_H__
#define __PHYDM_FEATURES


#if (DM_ODM_SUPPORT_TYPE == ODM_CE)

	/*Antenna Diversity*/
	#ifdef CONFIG_ANTENNA_DIVERSITY
		#define CONFIG_PHYDM_ANTENNA_DIVERSITY
		
		#ifdef CONFIG_PHYDM_ANTENNA_DIVERSITY
		
			#if (RTL8723B_SUPPORT == 1) || (RTL8821A_SUPPORT == 1) || (RTL8188F_SUPPORT == 1)
			#define	CONFIG_S0S1_SW_ANTENNA_DIVERSITY
			#endif
			
			#if (RTL8821A_SUPPORT == 1)
			/*#define CONFIG_HL_SMART_ANTENNA_TYPE1*/
			#endif
		#endif
	#endif
	
	/*#define CONFIG_RA_DBG_CMD*/
	/*#define CONFIG_ANT_DETECTION*/
	/*#define CONFIG_PATH_DIVERSITY*/
	/*#define CONFIG_RA_DYNAMIC_RTY_LIMIT*/

#endif


#endif
