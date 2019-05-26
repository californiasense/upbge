/*
 * Manager for ray events
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

/** \file CM_List.h
 *  \ingroup common
 */

#ifndef __CM_LIST_H__
#define __CM_LIST_H__

#include <algorithm>

template <class Item, class List>
inline bool CM_ListRemoveIfFound(List& list, const Item& item)
{
	const typename List::iterator it = std::find(list.begin(), list.end(), item);
	if (it != list.end()) {
		list.erase(it);
		return true;
	}
	return false;
}

template <class Item, class List>
inline bool CM_ListAddIfNotFound(List& list, const Item& item)
{
	if (std::find(list.begin(), list.end(), item) == list.end()) {
		list.push_back(item);
		return true;
	}
	return false;
}

#endif  // __CM_LIST_H__
