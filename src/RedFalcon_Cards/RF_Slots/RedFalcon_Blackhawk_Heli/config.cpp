class CfgPatches
{
	class RedFalcon_Blackhawk_Heli
	{
		units[] = {""};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Vehicles_Parts","DZ_Vehicles_Wheeled","DZ_Scripts","DZ_Data","RFFSHeli_Blackhawk_sounds","RFFSHeli_Core","RFFSHeli_Blackhawk_Heli"};
	};
};

class CfgSlots
{
	class Slot_Blackhawkcard
	{
		name = "Blackhawkcard";
		displayName = "Pilot License Card";
		ghostIcon = "set:pilot_license image:pilot_license";
	};
};

class CfgVehicles
{
	class RedFalcon_Cards_Base;
	class RFFSHeli_base;

	class RFFSHeli_Blackhawk: RFFSHeli_base
	{
		attachments[] = 
		{
			"AviationBattery",
			"AviationIgniterPlug",
			"AviationHydraulicHoses",
			"AviationWiringHarness",
			"Blackhawkcard",
			"blackhawk_doors_driver",
			"blackhawk_doors_codriver",
			"blackhawk_doors_cargo1",
			"blackhawk_doors_cargo1a",
			"blackhawk_doors_cargo2",
			"blackhawk_doors_cargo2a",
			"blackhawk_doors_cargo3",
			"blackhawk_doors_cargo4",
			"NivaWheel_1_1",
			"NivaWheel_1_2",
			"NivaWheel_2_1",
			"NivaWheel_2_2",
			"Reflector_1_1",
			"Reflector_2_1",
			"Flight_Case1",
			"Flight_Case2"
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
					"Blackhawkcard"
				};
			};
		};
	};
	
	class RedFalcon_Cards_Blackhawk: RedFalcon_Cards_Base
	{
    	scope = 2;
		inventorySlot[]=
		{
			"Blackhawkcard"
		};
	};
	
};