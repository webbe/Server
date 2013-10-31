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

/*
	NOTE: Inclusion of this code file should be limited as to avoid calls to unprotected
	declarations and definitions. Instead, use 'clientlimits.h' for protected accessors.
*/

#include "clientlimits.h"

/*
**	Single Entry Array enumeration references (file scope)
**
**	(activate/add as needed...)
*/
/* enum SingleEntryBOOL
{
	_SingleEntryBOOLCount
}; */

/* enum SingleEntryINT8
{
	_SingleEntryINT8Count
}; */

enum SingleEntryUINT8
{
	PP_BandolierCount,
	PP_PotionBeltCount,
	_SingleEntryUINT8Count
};

/* enum SingleEntryINT16
{
	_SingleEntryINT16Count
}; */

/* enum SingleEntryUINT16
{
	_SingleEntryUINT16Count
}; */

/* enum SingleEntryINT32
{
	_SingleEntryINT32Count
}; */

enum SingleEntryUINT32
{
	PP_SkillCount,
	BZR_SlotCount,
	_SingleEntryUINT32Count
};

enum SingleEntryINT
{
	CORP_SlotCount,
	_SingleEntryINTCount
};

/* enum SingleEntryUINT
{
	_SingleEntryUINTCount
}; */

/*
**	Generic Reference Arrays (file scope)
**
**	Data assignments must be in the same order as the [reference] and [client] enumerations
**	Client Order = {'Unknown', '62', 'Titanium', 'SoF', 'SoD', 'Underfoot', 'RoF1', 'RoF2'}
**
**	(activate/add as needed...)
*/
/* static const bool SingleEntryBOOLArray[_SingleEntryBOOLCount][_EQClientCount] =
{

}; */

/* static const int8 SingleEntryINT8Array[_SingleEntryINT8Count][_EQClientCount] =
{

}; */

static const uint8 SingleEntryUINT8Array[_SingleEntryUINT8Count][_EQClientCount] =
{
/*PP_BandolierCount*/	{0, 0, 0, 0, 0, 0, 0, 0},
/*PP_PotionBeltCount*/	{0, 0, 0, 0, 0, 0, 0, 0}
};

/* static const int16 SingleEntryINT16Array[_SingleEntryINT16Count][_EQClientCount] =
{

}; */

/* static const uint16 SingleEntryUINT16Array[_SingleEntryUINT16Count][_EQClientCount] =
{

}; */

/* static const int32 SingleEntryINT32Array[_SingleEntryINT32Count][_EQClientCount] =
{

}; */

static const uint32 SingleEntryUINT32Array[_SingleEntryUINT32Count][_EQClientCount] =
{
/*PP_SkillCount*/	{_NOTUSED, _SkillCount_62, _SkillCount_62, _SkillCount_SoF, _SkillCount_SoF, _SkillCount_SoF, _SkillCount_SoF, _SkillCount_RoF2},
/*BZR_SlotCount*/	{_NOTUSED, 80, 80, 80, 80, 80, 200, 200}
};

static const int SingleEntryINTArray[_SingleEntryINTCount][_EQClientCount] =
{
/*CORP_SlotCount,*/	{_NOTUSED, 30, 31, 32, 32, 32, 34, 34}	// '62 = 30' is based on existing code limit..if someone has a '62' client, please verify
};

/* static const unsigned int SingleEntryUINTArray[_SingleEntryUINTCount][_EQClientCount] =
{

}; */

/*
**	Specialized Reference Arrays (file scope)
**
**	(activate/add as needed...)
*/
/*	*** EXAMPLE (incomplete) ***
static const int16 InventorySlotTypeLimits[_SlotTypeCount][_EQClientCount] =
{
	{_NOTUSED, 34, 34, 34, 34, 34, 34, 34},	// SlotTypePossessions (requires bitmask use)
	{_NOTUSED, 16, 16, 24, 24, 24, 24, 24},	// SlotTypeBank
	{_NOTUSED, 2, 2, 2, 2, 2, 2, 2},		// SlotTypeSharedBank
	{_NOTUSED, 8, 8, 8, 8, 8, 8, 8},		// SlotTypeTrade
	{_NOTUSED, 10, 10, 10, 10, 10, 10, 10},	// SlotTypeWorld
	{_NOTUSED, 36, 36, 36, 36, 36, 36, 36},	// SlotTypeLimbo
	{_NOTUSED, 0, 0, 0, 0, 0, -1, -1},		// SlotTypeTribute
	{_NOTUSED, 0, 0, 0, 0, 0, -1, -1},		// SlotTypeTrophyTribute
	{_NOTUSED, 0, 0, 0, 0, 0, -1, -1},		// SlotTypeGuildTribute
	{_NOTUSED, 0, 0, 0, 0, 0, -1, -1},		// SlotTypeMerchant
	{_NOTUSED, 0, 0, 0, 0, 0, -1, -1},		// SlotTypeDeleted
	{_NOTUSED, 0, 0, 0, 0, 34, 34, 34},		// SlotTypeCorpse
	{_NOTUSED, 0, 0, 0, 0, 80, 200, 200},	// SlotTypeBazaar
	{_NOTUSED, 0, 0, 0, 0, 0, -1, -1},		// SlotTypeInspect
	{_NOTUSED, 0, 0, 0, 0, 0, -1, -1},		// SlotTypeRealEstate
	{_NOTUSED, 0, 0, 0, 0, 0, -1, -1},		// SlotTypeViewMODPC
	{_NOTUSED, 0, 0, 0, 0, 0, -1, -1},		// SlotTypeViewMODBank
	{_NOTUSED, 0, 0, 0, 0, 0, -1, -1},		// SlotTypeViewMODSharedBank
	{_NOTUSED, 0, 0, 0, 0, 0, -1, -1},		// SlotTypeViewMODLimbo
	{_NOTUSED, 0, 0, 0, 0, 0, -1, -1},		// SlotTypeAltStorage
	{_NOTUSED, 0, 0, 0, 0, 0, -1, -1},		// SlotTypeArchived
	{_NOTUSED, 0, 0, 0, 0, 0, -1, -1},		// SlotTypeMail
	{_NOTUSED, 0, 0, 0, 0, 0, -1, -1},		// SlotTypeGuildTrophyTribute
	{_NOTUSED, 0, 0, 0, 0, 0, 0, 1},		// SlotTypeKrono
	{_NOTUSED, 0, 0, 0, 0, 0, -1, -1}		// SlotTypeOther
};
*/

/*
**	Internal Functions (file scope)
**
**	Any accessor that returns an array value should call _IsClientMapped() before accessing it
**
**	(activate/add as needed...)
*/
bool _IsClientMapped(uint32 client_version)
{
	return (client_version < _EQClientCount);
}

/*
**	Limits::
**
*/
bool Limits::IsClientMapped(uint32 client_version)
{
	return _IsClientMapped(client_version);
}

/*
**	Limits::Bazaar::
**
*/
uint32 Limits::Bazaar::SlotCount(uint32 client_version)
{
	if(_IsClientMapped(client_version)) { return SingleEntryUINT32Array[BZR_SlotCount][client_version]; }
	else { return _NOTUSED; }
}

/*
**	Limits::Corpse::
**
*/
int Limits::Corpse::SlotCount(uint32 client_version)
{
	if(_IsClientMapped(client_version)) { return SingleEntryINTArray[CORP_SlotCount][client_version]; }
	else { return _NOTUSED; }
}

/*
**	Limits::Inventory::
**
*/

/*
**	Limits::PlayerProfile::
**
*/
uint32 Limits::PlayerProfile::SkillCount(uint32 client_version)
{
	if(_IsClientMapped(client_version)) { return SingleEntryUINT32Array[PP_SkillCount][client_version]; }
	else { return _NOTUSED; }
}

uint8 Limits::PlayerProfile::BandolierCount(uint32 client_version)
{
	if(_IsClientMapped(client_version)) { return SingleEntryUINT8Array[PP_BandolierCount][client_version]; }
	else { return _NOTUSED; }
}

uint8 Limits::PlayerProfile::PotionBeltCount(uint32 client_version)
{
	if(_IsClientMapped(client_version)) { return SingleEntryUINT8Array[PP_PotionBeltCount][client_version]; }
	else { return _NOTUSED; }
}
