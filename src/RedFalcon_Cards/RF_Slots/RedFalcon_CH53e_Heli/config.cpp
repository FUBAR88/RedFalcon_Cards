class CfgPatches
{
	class RedFalcon_CH53e_Heli
	{
		units[] = {""};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","RFFSHeli_Core","RFFSHeli_CH53e_sounds","RFFSHeli_CH53e_mod"};
	};
};

class CfgSlots
{
	class Slot_CH53eCard
	{
		name = "CH53eCard";
		displayName = "Pilot License Card";
		ghostIcon = "set:pilot_license image:pilot_license";
	};
};

class CfgVehicles
{
	class RedFalcon_Cards_Base;
	class RFFSHeli_base;

	class RFFSHeli_CH53e: RFFSHeli_base
	{
		attachments[] = 
		{
			"AviationBattery",
			"AviationIgniterPlug",
			"AviationHydraulicHoses",
			"AviationWiringHarness",
			"CH53eCard",
			"ch53e_doors_cargo1",
			"ch53e_doors_cargo2",
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
					"CH53eCard"
				};
			};
		};
	};
	
	class RedFalcon_Cards_CH53e: RedFalcon_Cards_Base
	{
    	scope = 2;
		inventorySlot[]=
		{
			"CH53eCard"
		};
	};
	
};