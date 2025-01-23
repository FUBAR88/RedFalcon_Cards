class CfgPatches
{
	class RedFalcon_Cards
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={};
	};
};
class CfgMods
{
	class RedFalcon_Cards
	{
		dir="RedFalcon_Cards";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="RedFalcon_Cards";
		credits="";
		author="";
		authorID="0";
		version="1.1";
		extra=0;
		type="mod";
		dependencies[]=
		{
			"Game",
			"World",
			"Mission"
		};
		class defs
		{
			class imageSets
			{
				files[] = {"RedFalcon_Cards\RF_Slots\gui\imagesets\pilot_license.imageset"};
			};
			class gameScriptModule
			{
				value="";
				files[]=
				{
					"RedFalcon_Cards/scripts/Common",
					"RedFalcon_Cards/scripts/3_Game"
				};
			};
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"RedFalcon_Cards/scripts/Common",
					"RedFalcon_Cards/scripts/4_World"
				};
			};
			class missionScriptModule
			{
				value="";
				files[]=
				{
					"RedFalcon_Cards/scripts/Common",
					"RedFalcon_Cards/scripts/5_Mission"
				};
			};
		};
	};
};
class CfgVehicles
{

};
