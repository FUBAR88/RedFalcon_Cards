modded class ActionStartHelicopter
{
    override bool ActionCondition(PlayerBase player, ActionTarget target, ItemBase item)
    {
        // Call the original ActionCondition from RFFS
        if (!super.ActionCondition(player, target, item))
            return false;

        // Check tHe new Heli slots for a card using RFFSHeli_base
        HumanCommandVehicle vehCommand = player.GetCommand_Vehicle();
        if (vehCommand)
        {
            Transport trans = vehCommand.GetTransport();
            if (trans)
            {
                RFFSHeli_base RFFSHeli;
                if (Class.CastTo(RFFSHeli, trans))
                {
                    // Create a Loop to check all slots created 
                    array<string> cardSlots = {"Apachecard","Bell429card","R22Card","UH1HCard","S76Card","Mi2Card","LittleBirdCard","Ka26Card","EC135Card","CH47Card","BlackhawkCargoCard","Blackhawkcard","Bo105mCard","AS350card",};
                    foreach (string slot : cardSlots)
                    {
                        EntityAI cardItem = RFFSHeli.FindAttachmentBySlotName(slot);
                        if (cardItem && cardItem.IsInherited(RedFalcon_Cards_Base))
                        {
                            return true; // Lets GO!
                        }
                    }
                }
            }
        }

        return false; // No card no fly
    }
};
