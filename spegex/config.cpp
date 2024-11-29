#define _ARMA_

class CfgPatches
{
	class spegex
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 1;
		requiredAddons[] = {"A3_Characters_F"};
	};
};
class CfgUnitInsignia{};
class CfgVehicles
{
	class SPE_GER_Soldier_Boots;
	class SPE_GER_Soldier_Gaiters;
	class SPE_GER_Soldier_Unbloused;
	class SPE_GER_Soldier_Oberschutze_Boots;
	class SPE_GER_Soldier_base;
	class SPE_GER_lehr_uniform;
	class SPE_GER_spg_crew;
	// Waffen-SS Divisions
	#include "spegex_5ss_wiking_vehicles.hpp"
	#include "spegex_5ss_germania_vehicles.hpp"
	#include "spegex_5ss_nordland_vehicles.hpp"
	#include "spegex_5ss_westland_vehicles.hpp"
	#include "spegex_7ss_prinz_eugen_vehicles.hpp"
	#include "spegex_11ss_nordland_vehicles.hpp"
	#include "spegex_13ss_handschar_vehicles.hpp"
	#include "spegex_14ss_galician_vehicles.hpp"
	#include "spegex_15ss_latvian_vehicles.hpp"
	#include "spegex_18ss_horst_wessel_vehicles.hpp"
	#include "spegex_19ss_latvian_vehicles.hpp"
	#include "spegex_20ss_estonian_vehicles.hpp"
	#include "spegex_21ss_skanderbeg_vehicles.hpp"
	#include "spegex_22ss_maria_theresia_vehicles.hpp"
	#include "spegex_23ss_nederland_vehicles.hpp"
	#include "spegex_24ss_karstjager_vehicles.hpp"
};

class cfgWeapons
{
	class U_BasicBody;
	class U_SPE_BasicBody: U_BasicBody
	{
		class ItemInfo;
	};
	class U_SPE_GER_BasicBody_Camo_base: U_SPE_BasicBody
	{
			scope = 0;
	};
	class ItemCore;
	class H_HelmetB: ItemCore
	{
		class ItemInfo;
	};
	class H_SPE_HelmetB: H_HelmetB {};
	class H_SPE_Hat: H_SPE_HelmetB
	{
		class ItemInfo;
	};
	#include "spegex_5ss_wiking_weapons.hpp"
	#include "spegex_5ss_germania_weapons.hpp"
	#include "spegex_5ss_nordland_weapons.hpp"
	#include "spegex_5ss_westland_weapons.hpp"
	#include "spegex_7ss_prinz_eugen_weapons.hpp"
	#include "spegex_11ss_nordland_weapons.hpp"
	#include "spegex_13ss_handschar_weapons.hpp"
	#include "spegex_14ss_galician_weapons.hpp"
	#include "spegex_15ss_latvian_weapons.hpp"
	#include "spegex_18ss_horst_wessel_weapons.hpp"
	#include "spegex_19ss_latvian_weapons.hpp"
	#include "spegex_20ss_estonian_weapons.hpp"
	#include "spegex_21ss_skanderbeg_weapons.hpp"
	#include "spegex_22ss_maria_theresia_weapons.hpp"
	#include "spegex_23ss_nederland_weapons.hpp"
	#include "spegex_24ss_karstjager_weapons.hpp"
};


class cfgMods
{
	author = "Lengfelder";
	timepacked = "1694817430";
};
