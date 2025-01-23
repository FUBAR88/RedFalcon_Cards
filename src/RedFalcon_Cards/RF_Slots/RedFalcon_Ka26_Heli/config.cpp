class CfgPatches
{
	class RedFalcon_Ka26_Heli
	{
		units[] = {""};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Vehicles_Parts","DZ_Vehicles_Wheeled","DZ_Scripts","DZ_Data","RFFSHeli_Ka26_sounds","RFFSHeli_Core","RFFSHeli_Ka26_Heli"};
	};
};

class CfgSlots
{
	class Slot_Ka26Card
	{
		name = "Ka26Card";
		displayName = "Pilot License Card";
		ghostIcon = "set:pilot_license image:pilot_license";
	};
};

class CfgVehicles
{
	class RedFalcon_Cards_Base;
	class RFFSHeli_base;

	class RFFSHeli_Ka26: RFFSHeli_base
	{
		attachments[] = 
		{
			"AviationBattery",
			"AviationIgniterPlug",
			"AviationHydraulicHoses",
			"AviationWiringHarness",
			"Ka26Card",
			"heli_ka26_doors_driver",
			"heli_ka26_doors_codriver",
			"heli_ka26_doors_cargo1",
			"heli_ka26_doors_cargo2",
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
					"Ka26Card"
				};
			};
		};
	};
	
	class RedFalcon_Cards_Ka26: RedFalcon_Cards_Base
	{
    	scope = 2;
		inventorySlot[]=
		{
			"Ka26Card"
		};
	};
	
};