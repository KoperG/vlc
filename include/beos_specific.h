/*****************************************************************************
 * beos_specific.h: BeOS specific features 
 *****************************************************************************
 * Copyright (C) 1999, 2000 VideoLAN
 * $Id: beos_specific.h,v 1.5 2001/04/12 01:52:45 sam Exp $
 *
 * Authors: Jean-Marc Dressler <polux@via.ecp.fr>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111, USA.
 *****************************************************************************/

/*****************************************************************************
 * Prototypes
 *****************************************************************************/

#ifdef __cplusplus
extern "C" {
#endif

void    system_Create ( int *pi_argc, char *ppsz_argv[], char *ppsz_env[] );
void    system_Destroy( void );
char  * system_GetProgramPath( void );

#ifdef __cplusplus
}
#endif
