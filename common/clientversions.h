#ifndef CLIENTVERSIONS_H
#define CLIENTVERSIONS_H

static const uint32		BIT_Client62	= 1;
static const uint32		BIT_Titanium	= 2;
static const uint32		BIT_SoF			= 4;
static const uint32		BIT_SoD			= 8;
static const uint32		BIT_Underfoot	= 16;
static const uint32		BIT_RoF1		= 32;	// (12-10-2012 - pre-Krono Steam)
static const uint32		BIT_RoF2		= 64;	// (05-10-2013 - Krono/current Steam)

static const uint32		BIT_TitaniumAndEarlier	= 0x00000003;
static const uint32		BIT_AllClients			= 0xFFFFFFFF;
static const uint32		BIT_SoFAndLater			= 0xFFFFFFFC;
static const uint32		BIT_SoDAndLater			= 0xFFFFFFF8;
static const uint32		BIT_UnderfootAndLater	= 0xFFFFFFF0;
static const uint32		BIT_RoF1AndLater		= 0xFFFFFFE0;
static const uint32		BIT_RoF2AndLater		= 0xFFFFFFC0;

typedef enum
{
	EQClientUnknown	= 0,
 	EQClient62,
 	EQClientTitanium,
 	EQClientSoF,
 	EQClientSoD,
 	EQClientUnderfoot,
	EQClientRoF1,
	EQClientRoF2,
	_EQClientCount
} EQClientVersion;

#endif /* CLIENTVERSIONS_H */
