#include "script.h"
#include "keyboard.h"
#include "..\..\inc\natives.h"

void ScriptMain()
{
    static bool blipCreated = false;

    while (true)
    {
        if (!blipCreated)
        {
            float x = BLIP_X;
            float y = BLIP_Y;
            float z = BLIP_Z;

            // --- Blip ---
            Blip blip = UI::ADD_BLIP_FOR_COORD(x, y, z);

            UI::SET_BLIP_SPRITE(blip, BLIP_ICON);       // Garage / Ramp
            UI::SET_BLIP_SCALE(blip, 1.0f);
            UI::SET_BLIP_COLOUR(blip, 0);
            UI::SET_BLIP_DISPLAY(blip, 4);
            UI::SET_BLIP_AS_SHORT_RANGE(blip, false);

            // --- Blip Name ---
            UI::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("STRING");
            UI::_ADD_TEXT_COMPONENT_STRING("BLIP_NAME");
            UI::END_TEXT_COMMAND_SET_BLIP_NAME(blip);

            blipCreated = true;
        }

        WAIT(0);
    }
}
