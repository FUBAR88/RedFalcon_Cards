class CfgPatches
{
    class RF_Cards
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {"DZ_Data", "DZ_Scripts"};
    };
};

class CfgVehicles
{
    class Inventory_Base;

    class RedFalcon_Cards_Base: Inventory_Base
    {
        displayName = "Base Card";
        descriptionShort = "Base Card";
        animClass = "lockpick";
        model = "RedFalcon_Cards\RF_Cards\RedFalcon_Cards.p3d";
		hiddenSelectionsTextures[]=
		    {
			    "RedFalcon_Cards\RF_Cards\retexture\RevolutionZA_InsuranceCard_Insurance.paa"
		    };
        hiddenSelections[] = 
            {
                "Card"
            };
        rotationFlags = 17;
        RestrainUnlockType = 0;
        weight = 4;
        fragility = 0.01;
        itemSize[] = {1, 1};
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 15;
                    healthLevels[] =
                    {
                        {1, {"RedFalcon_Cards\RF_Cards\Data\card.rvmat"}},
                        {0.7, {"RedFalcon_Cards\RF_Cards\Data\card.rvmat"}},
                        {0.5, {"RedFalcon_Cards\RF_Cards\Data\card_damage.rvmat"}},
                        {0.3, {"RedFalcon_Cards\RF_Cards\Data\card_damage.rvmat"}},
                        {0, {"RedFalcon_Cards\RF_Cards\Data\card_destruct.rvmat"}}
                    };
                };
            };
        };
    };

	class RedFalcon_Cards_Apache: RedFalcon_Cards_Base
	{
    	scope = 2;
    	displayName = "Apache Helicopter License";
    	descriptionShort = "A special license required to operate the Apache Helicopter. Only those with this card are authorized to fly this vehicle.";
    	hiddenSelectionsTextures[]=
		{
			"RedFalcon_Cards\RF_Cards\retexture\RedFalcon_Cards_Apache.paa"
		};
	};


	class RedFalcon_Cards_AS350: RedFalcon_Cards_Base
	{
	    scope = 2;
	    displayName = "AS350 Helicopter License";
	    descriptionShort = "A special license required to operate the AS350 Helicopter. Only those with this card are authorized to fly this vehicle.";
	    hiddenSelectionsTextures[]=
	    {
        	"RedFalcon_Cards\RF_Cards\retexture\RedFalcon_Cards_AS350.paa"
    	};
	};
	
	class RedFalcon_Cards_Bell429: RedFalcon_Cards_Base
	{
	    scope = 2;
	    displayName = "Bell 429 Helicopter License";
	    descriptionShort = "A special license required to operate the Bell 429 Helicopter. Only those with this card are authorized to fly this vehicle.";
	    hiddenSelectionsTextures[]=
	    {
        	"RedFalcon_Cards\RF_Cards\retexture\RedFalcon_Cards_Bell429.paa"
    	};
	};
	
	class RedFalcon_Cards_Blackhawk: RedFalcon_Cards_Base
	{
	    scope = 2;
	    displayName = "Blackhawk Helicopter License";
	    descriptionShort = "A special license required to operate the Blackhawk Helicopter. Only those with this card are authorized to fly this vehicle.";
	    hiddenSelectionsTextures[]=
	    {
        	"RedFalcon_Cards\RF_Cards\retexture\RedFalcon_Cards_Blackhawk.paa"
    	};
	};
	
	class RedFalcon_Cards_Blackhawk_Cargo: RedFalcon_Cards_Base
	{
	    scope = 2;
	    displayName = "Blackhawk Cargo Helicopter License";
	    descriptionShort = "A special license required to operate the Blackhawk Cargo Helicopter. Only those with this card are authorized to fly this vehicle.";
	    hiddenSelectionsTextures[]=
	    {
        	"RedFalcon_Cards\RF_Cards\retexture\RedFalcon_Cards_Blackhawk_Cargo.paa"
    	};
	};
	
	class RedFalcon_Cards_Bo105m: RedFalcon_Cards_Base
	{
	    scope = 2;
	    displayName = "Bo105m Helicopter License";
	    descriptionShort = "A special license required to operate the Bo105m Helicopter. Only those with this card are authorized to fly this vehicle.";
	    hiddenSelectionsTextures[]=
	    {
        	"RedFalcon_Cards\RF_Cards\retexture\RedFalcon_Cards_Bo105m.paa"
    	};
	};
	
	class RedFalcon_Cards_CH47: RedFalcon_Cards_Base
	{
	    scope = 2;
	    displayName = "CH47 Helicopter License";
	    descriptionShort = "A special license required to operate the CH47 Helicopter. Only those with this card are authorized to fly this vehicle.";
	    hiddenSelectionsTextures[]=
	    {
        	"RedFalcon_Cards\RF_Cards\retexture\RedFalcon_Cards_CH47.paa"
    	};
	};
	
	class RedFalcon_Cards_CH53e: RedFalcon_Cards_Base
	{
	    scope = 2;
	    displayName = "CH53e Helicopter License";
	    descriptionShort = "A special license required to operate the CH53e Helicopter. Only those with this card are authorized to fly this vehicle.";
	    hiddenSelectionsTextures[]=
	    {
        	"RedFalcon_Cards\RF_Cards\retexture\RedFalcon_Cards_CH53e.paa"
    	};
	};
	
	class RedFalcon_Cards_EC135: RedFalcon_Cards_Base
	{
	    scope = 2;
	    displayName = "EC135 Helicopter License";
	    descriptionShort = "A special license required to operate the EC135 Helicopter. Only those with this card are authorized to fly this vehicle.";
	    hiddenSelectionsTextures[]=
	    {
        	"RedFalcon_Cards\RF_Cards\retexture\RedFalcon_Cards_EC135.paa"
    	};
	};
	
	class RedFalcon_Cards_Ka26: RedFalcon_Cards_Base
	{
	    scope = 2;
	    displayName = "Ka26 Helicopter License";
	    descriptionShort = "A special license required to operate the Ka26 Helicopter. Only those with this card are authorized to fly this vehicle.";
	    hiddenSelectionsTextures[]=
	    {
        	"RedFalcon_Cards\RF_Cards\retexture\RedFalcon_Cards_Ka26.paa"
    	};
	};
	
	class RedFalcon_Cards_LittleBird: RedFalcon_Cards_Base
	{
	    scope = 2;
	    displayName = "Little Bird Helicopter License";
	    descriptionShort = "A special license required to operate the Little Bird Helicopter. Only those with this card are authorized to fly this vehicle.";
	    hiddenSelectionsTextures[]=
	    {
        	"RedFalcon_Cards\RF_Cards\retexture\RedFalcon_Cards_LittleBird.paa"
    	};
	};
	
	class RedFalcon_Cards_Mi2: RedFalcon_Cards_Base
	{
	    scope = 2;
	    displayName = "Mi2 Helicopter License";
	    descriptionShort = "A special license required to operate the Mi2 Helicopter. Only those with this card are authorized to fly this vehicle.";
	    hiddenSelectionsTextures[]=
	    {
        	"RedFalcon_Cards\RF_Cards\retexture\RedFalcon_Cards_Mi2.paa"
    	};
	};
	
	class RedFalcon_Cards_R22: RedFalcon_Cards_Base
	{
	    scope = 2;
	    displayName = "22 Helicopter License";
	    descriptionShort = "A special license required to operate the 22 Helicopter. Only those with this card are authorized to fly this vehicle.";
	    hiddenSelectionsTextures[]=
	    {
        	"RedFalcon_Cards\RF_Cards\retexture\RedFalcon_Cards_R22.paa"
    	};
	};
	
	class RedFalcon_Cards_S76: RedFalcon_Cards_Base
	{
	    scope = 2;
	    displayName = "S76 Helicopter License";
	    descriptionShort = "A special license required to operate the S76 Helicopter. Only those with this card are authorized to fly this vehicle.";
	    hiddenSelectionsTextures[]=
	    {
        	"RedFalcon_Cards\RF_Cards\retexture\RedFalcon_Cards_S76.paa"
    	};
	};
	
	class RedFalcon_Cards_UH1H: RedFalcon_Cards_Base
	{
	    scope = 2;
	    displayName = "UH1H Helicopter License";
	    descriptionShort = "A special license required to operate the UH1H Helicopter. Only those with this card are authorized to fly this vehicle.";
	    hiddenSelectionsTextures[]=
	    {
        	"RedFalcon_Cards\RF_Cards\retexture\RedFalcon_Cards_UH1H.paa"
    	};
	};
};
	