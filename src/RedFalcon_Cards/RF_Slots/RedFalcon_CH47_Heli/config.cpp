class CfgPatches
{
	class RedFalcon_CH47_Heli
	{
		units[] = {""};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","RFFSHeli_Core","RFFSHeli_CH47_sounds","RFFSHeli_CH47_mod"};
	};
};

class CfgSlots
{
	class Slot_CH47Card
	{
		name = "CH47Card";
		displayName = "Pilot License Card";
		ghostIcon = "set:pilot_license image:pilot_license";
	};
};

class CfgVehicles
{
	class RedFalcon_Cards_Base;
	class RFFSHeli_base;

	class RFFSHeli_CH47: RFFSHeli_base
	{
		attachments[] = 
		{
			"AviationBattery",
			"AviationIgniterPlug",
			"AviationHydraulicHoses",
			"AviationWiringHarness",
			"CH47Card",
			"ch47_doors_cargo1",
			"ch47_doors_cargo2",
			"NivaWheel_1_1",
			"NivaWheel_1_2",
			"NivaWheel_2_1",
			"NivaWheel_2_2",
			"Reflector_1_1",
			"Reflector_2_1",
			"Flight_Case1",
			"Flight_Case2",
			"Flight_Case3",
			"Flight_Case4",
			"Flight_Case5",
			"Flight_Case6",
			"Flight_Case7",
			"Flight_Case8"
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
					"Reflector_1_1","Reflector_2_1",
					"CH47Card"
				};
			};
		};
	};
	
	class RedFalcon_Cards_CH47: RedFalcon_Cards_Base
	{
    	scope = 2;
		inventorySlot[]=
		{
			"CH47Card"
		};
	};
	
};