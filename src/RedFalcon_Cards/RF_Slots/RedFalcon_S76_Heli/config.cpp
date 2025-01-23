class CfgPatches
{
	class RedFalcon_S76_Heli
	{
		units[] = {""};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Vehicles_Parts","DZ_Vehicles_Wheeled","DZ_Scripts","DZ_Data","RFFSHeli_S76_sounds","RFFSHeli_Core","RFFSHeli_S76_Heli"};
	};
};

class CfgSlots
{
	class Slot_S76Card
	{
		name = "S76Card";
		displayName = "Pilot License Card";
		ghostIcon = "set:pilot_license image:pilot_license";
	};
};

class CfgVehicles
{
	class RedFalcon_Cards_Base;
	class RFFSHeli_base;

	class RFFSHeli_S76: RFFSHeli_base
	{
		attachments[] = 
		{
			"AviationBattery",
			"AviationIgniterPlug",
			"AviationHydraulicHoses",
			"AviationWiringHarness",
			"S76Card",
			"S76_doors_driver",
			"S76_doors_codriver",
			"S76_doors_cargo1",
			"S76_doors_cargo2",
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
					"S76Card"
				};
			};
		};
	};
	
	class RedFalcon_Cards_S76: RedFalcon_Cards_Base
	{
    	scope = 2;
		inventorySlot[]=
		{
			"S76Card"
		};
	};
	
};