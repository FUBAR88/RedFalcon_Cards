class CfgPatches
{
	class RedFalcon_R22_Heli
	{
		units[] = {""};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Vehicles_Parts","DZ_Vehicles_Wheeled","DZ_Scripts","DZ_Data","RFFSHeli_R22_sounds","RFFSHeli_Core","RFFSHeli_R22_Heli"};
	};
};

class CfgSlots
{
	class Slot_R22Card
	{
		name = "R22Card";
		displayName = "Pilot License Card";
		ghostIcon = "set:pilot_license image:pilot_license";
	};
};

class CfgVehicles
{
	class RedFalcon_Cards_Base;
	class RFFSHeli_base;

	class RFFSHeli_R22: RFFSHeli_base
	{
		attachments[] = 
		{
			"AviationBattery",
			"AviationIgniterPlug",
			"AviationHydraulicHoses",
			"AviationWiringHarness",
			"R22Card",
			"r22_doors_driver",
			"r22_doors_codriver",
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
					"R22Card"
				};
			};
		};
	};
	
	class RedFalcon_Cards_R22: RedFalcon_Cards_Base
	{
    	scope = 2;
		inventorySlot[]=
		{
			"R22Card"
		};
	};
	
};