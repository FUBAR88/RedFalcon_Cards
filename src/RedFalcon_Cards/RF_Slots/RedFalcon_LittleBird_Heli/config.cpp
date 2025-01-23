class CfgPatches
{
	class RedFalcon_LittleBird_Heli
	{
		units[] = {""};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Scripts","DZ_Data","DZ_Gear_Containers","DZ_Sounds_Effects","DZ_Vehicles_Wheeled","DZ_Vehicles_Parts","RFFSHeli_Core","RFFSHeli_LittleBird_sounds","RFFSHeli_LittleBird_Heli"};
	};
};

class CfgSlots
{
	class Slot_LittleBirdCard
	{
		name = "LittleBirdCard";
		displayName = "Pilot License Card";
		ghostIcon = "set:pilot_license image:pilot_license";
	};
};

class CfgVehicles
{
	class RedFalcon_Cards_Base;
	class RFFSHeli_base;

	class RFFSHeli_LittleBird: RFFSHeli_base
	{
		attachments[] = 
		{
			"AviationBattery",
			"AviationIgniterPlug",
			"AviationHydraulicHoses",
			"AviationWiringHarness",
			"LittleBirdCard",
			"NivaWheel_1_1",
			"NivaWheel_1_2",
			"NivaWheel_2_1",
			"NivaWheel_2_2",
			"Reflector_1_1",
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
					"LittleBirdCard"
				};
			};
		};
	};
	
	class RedFalcon_Cards_LittleBird: RedFalcon_Cards_Base
	{
    	scope = 2;
		inventorySlot[]=
		{
			"LittleBirdCard"
		};
	};
	
};