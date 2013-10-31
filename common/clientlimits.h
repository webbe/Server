/*	EQEMu: Everquest Server Emulator
	Copyright (C) 2001-2003 EQEMu Development Team (http://eqemulator.net)

	This program is free software; you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation; version 2 of the License.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY except by those people which sell it, which
	are required to give you total support for your newly bought product;
	without even the implied warranty of MERCHANTABILITY or FITNESS FOR
	A PARTICULAR PURPOSE. See the GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with this program; if not, write to the Free Software
	Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
*/

#ifndef CLIENTLIMITS_H
#define CLIENTLIMITS_H

#include "types.h"
#include "eq_constants.h"
#include "clientversions.h"

/*
**	namespace Limits
**
**	This namespace is a collection of methods and private values used to check client validity. It should eliminate the
**	need for multiple code segments, in most cases..one check will return the allowable client value (x, y, 0, etc...)
**	
**	Though arrays are fairly quick on retrieval, you should consider assigning the return value to a local variable for
**	repeat reference calls. The point of this system is to maximize coding efficiency for multiple client support.
**
**	Only values that change across client versions should be incorporated into this reference. Any constant value should
**	be defined in eq_contants.h or other appropriate files. (I guess client constants could be added, if appropriate.)
**
**	Code behavior should assume that the function is not allowed for a client if a return of 'false' or '0' is given,
**	unless otherwise stated or implied.
*/
namespace Limits
{
	bool IsClientMapped(uint32 client_version);

	namespace Bazaar
	{
		uint32 SlotCount(uint32 client_version);
	};

	namespace Corpse
	{
		int SlotCount(uint32 client_version);
	};

	namespace Inventory
	{

	};

	namespace PlayerProfile
	{
		uint32 SkillCount(uint32 client_version);
		uint8 BandolierCount(uint32 client_version);	// not ready for use
		uint8 PotionBeltCount(uint32 client_version);	// not ready for use
	};
};

#endif // #define CLIENTLIMITS_H
