class CfgPatches
{
	class RedFalcon_Bo105m_Heli
	{
		units[] = {""};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Vehicles_Parts","DZ_Vehicles_Wheeled","DZ_Scripts","DZ_Data","RFFSHeli_Bo105m_sounds","RFFSHeli_Core","RFFSHeli_Bo105m_Heli"};
	};
};

class CfgSlots
{
	class Slot_Bo105mCard
	{
		name = "Bo105mCard";
		displayName = "Pilot License Card";
		ghostIcon = "set:pilot_license image:pilot_license";
	};
};

class CfgVehicles
{
	class RedFalcon_Cards_Base;
	class RFFSHeli_base;

	class RFFSHeli_Bo105m: RFFSHeli_base
	{
		attachments[] = 
		{
			"AviationBattery",
			"AviationIgniterPlug",
			"AviationHydraulicHoses",
			"AviationWiringHarness",
			"Bo105mCard",
			"mbb_bo_105_doors_driver",
			"mbb_bo_105_doors_codriver",
			"mbb_bo_105_doors_cargo1",
			"mbb_bo_105_doors_cargo2",
			"mbb_bo_105_doors_cargo3",
			"mbb_bo_105_doors_cargo4",
			"mbb_bo_105_fuselage",
			"NivaWheel_1_1",
			"NivaWheel_1_2",
			"NivaWheel_2_1",
			"NivaWheel_2_2",
			"Reflector_1_1",
			"Reflector_2_1",
			"Flight_Case1"
		};
		class GUIInventoryAttachmentsProps
		{
			class Engine
			{
				name = "$STR_attachment_Engine0";
				description = "";
				icon = "cat_vehicle_engine";
				attachmentSlots[] = 
				{
					"AviationBattery",
					"AviationIgniterPlug",
					"AviationHydraulicHoses",
					"AviationWiringHarness",
					"Reflector_1_1",
					"Reflector_2_1",
					"Bo105mCard"
				};
			};
		};
	};
	
	class RedFalcon_Cards_Bo105m: RedFalcon_Cards_Base
	{
    	scope = 2;
		inventorySlot[]=
		{
			"Bo105mCard"
		};
	};
	
};