class CfgPatches
{
	class RedFalcon_EC135_Heli
	{
		units[] = {""};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Vehicles_Parts","DZ_Vehicles_Wheeled","DZ_Scripts","DZ_Data","RFFSHeli_EC135_sounds","RFFSHeli_Core","RFFSHeli_EC135_Heli"};
	};
};

class CfgSlots
{
	class Slot_EC135Card
	{
		name = "EC135Card";
		displayName = "Pilot License Card";
		ghostIcon = "set:pilot_license image:pilot_license";
	};
};

class CfgVehicles
{
	class RedFalcon_Cards_Base;
	class RFFSHeli_base;

	class RFFSHeli_EC135: RFFSHeli_base
	{
		attachments[] = 
		{
			"AviationBattery",
			"AviationIgniterPlug",
			"AviationHydraulicHoses",
			"AviationWiringHarness",
			"EC135Card",
			"ec135_doors_driver",
			"ec135_doors_codriver",
			"ec135_doors_cargo1",
			"ec135_doors_cargo2",
			"ec135_doors_cargo3",
			"ec135_doors_cargo4",
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
					"EC135Card"
				};
			};
		};
	};
	
	class RedFalcon_Cards_EC135: RedFalcon_Cards_Base
	{
    	scope = 2;
		inventorySlot[]=
		{
			"EC135Card"
		};
	};
	
};