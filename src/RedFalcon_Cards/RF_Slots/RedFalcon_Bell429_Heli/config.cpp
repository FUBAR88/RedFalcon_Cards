class CfgPatches
{
	class RedFalcon_Bell429_Heli
	{
		units[] = {""};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Vehicles_Parts","DZ_Vehicles_Wheeled","DZ_Scripts","DZ_Data","RFFSHeli_Bell429_sounds","RFFSHeli_Core","RFFSHeli_Bell429_Heli"};
	};
};

class CfgSlots
{
	class Slot_Bell429card
	{
		name = "Bell429card";
		displayName = "Pilot License Card";
		ghostIcon = "set:pilot_license image:pilot_license";
	};
};

class CfgVehicles
{
	class RedFalcon_Cards_Base;
	class RFFSHeli_base;

	class RFFSHeli_Bell429: RFFSHeli_base
	{
		attachments[] = 
		{
			"AviationBattery",
			"AviationIgniterPlug",
			"AviationHydraulicHoses",
			"AviationWiringHarness",
			"Bell429card",
			"bell429_doors_driver",
			"bell429_doors_codriver",
			"bell429_doors_cargo1",
			"bell429_doors_cargo2",
			"bell429_doors_cargo3",
			"bell429_doors_cargo4",
			"NivaWheel_1_1",
			"NivaWheel_1_2",
			"NivaWheel_2_1",
			"NivaWheel_2_2",
			"Reflector_1_1",
			"bell429_interior",
			"bell429_rearseats",
			"bell429_skids",
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
					"Bell429card"
				};
			};
		};
	};
	
	class RedFalcon_Cards_Bell429: RedFalcon_Cards_Base
	{
    	scope = 2;
		inventorySlot[]=
		{
			"Bell429card"
		};
	};
	
};