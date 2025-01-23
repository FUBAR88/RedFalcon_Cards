class CfgPatches
{
	class RedFalcon_UH1H_Heli
	{
		units[] = {""};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Vehicles_Parts","DZ_Vehicles_Wheeled","DZ_Scripts","DZ_Data","RFFSHeli_UH1H_sounds","RFFSHeli_Core","RFFSHeli_UH1H_Heli"};
	};
};

class CfgSlots
{
	class Slot_UH1HCard
	{
		name = "UH1HCard";
		displayName = "Pilot License Card";
		ghostIcon = "set:pilot_license image:pilot_license";
	};
};

class CfgVehicles
{
	class RedFalcon_Cards_Base;
	class RFFSHeli_base;

	class RFFSHeli_UH1H: RFFSHeli_base
	{
		attachments[] = 
		{
			"AviationBattery",
			"AviationIgniterPlug",
			"AviationHydraulicHoses",
			"AviationWiringHarness",
			"UH1HCard",
			"UH1H_doors_driver",
			"UH1H_doors_codriver",
			"UH1H_doors_cargo1",
			"UH1H_doors_cargo2",
			"UH1H_doors_cargo1a",
			"UH1H_doors_cargo2a",
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
					"UH1HCard"
				};
			};
		};
	};
	
	class RedFalcon_Cards_UH1H: RedFalcon_Cards_Base
	{
    	scope = 2;
		inventorySlot[]=
		{
			"UH1HCard"
		};
	};
	
};