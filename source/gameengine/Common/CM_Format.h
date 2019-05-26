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

/** \file CM_Format.h
 *  \ingroup common
 */

#ifndef __CM_FORMAT_H__
#define __CM_FORMAT_H__

#include <sstream>
#include <fstream>

template<typename T>
bool CM_StringTo(const std::string& string, T& out)
{
	std::stringstream stream(string);
	stream >> out;

	return !stream.fail();
}

#endif  // __CM_FORMAT_H__
