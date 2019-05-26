/*
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 * The Original Code is Copyright (C) 2001-2002 by NaN Holding BV.
 * All rights reserved.
 */

/** \file KX_CameraIpoSGController.h
 *  \ingroup ketsji
 */

#ifndef __KX_CAMERAIPOSGCONTROLLER_H__
#define __KX_CAMERAIPOSGCONTROLLER_H__

#include "SG_Controller.h"
#include "SG_Node.h"

#include "SG_Interpolator.h"

struct RAS_CameraData;

class KX_CameraIpoSGController : public SG_Controller
{
public:
	float           m_lens;
	float           m_clipstart;
	float           m_clipend;

private:
	unsigned short  	m_modify_lens 	 : 1;
	unsigned short	    m_modify_clipstart       : 1;
	unsigned short		m_modify_clipend    	 : 1;

public:
	KX_CameraIpoSGController() : 
				m_modify_lens(false),
				m_modify_clipstart(false),
				m_modify_clipend(false)
		{}

	virtual ~KX_CameraIpoSGController() = default;
	virtual bool Update(SG_Node *node);

	void	SetModifyLens(bool modify) {
		m_modify_lens = modify;
	}
	void	SetModifyClipEnd(bool modify) {
		m_modify_clipend = modify;
	}
	void	SetModifyClipStart(bool modify) {
		m_modify_clipstart = modify;
	}
};

#endif  /* __KX_CAMERAIPOSGCONTROLLER_H__ */
