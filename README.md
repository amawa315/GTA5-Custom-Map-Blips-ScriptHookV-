# GTA5 Custom Map Blips (ScriptHookV)

This is a C++ ScriptHookV script for GTA5 that adds custom blips (pins, offices, garages, etc.) to the in-game map.

## Features
- Add blips (map icons) to any coordinates
- Supports pins, offices, buildings, garages, and other icons
- Blip names can be displayed in Japanese
- Coordinates, icon IDs, and blip names can be easily changed

## Requirements
- GTA5
- ScriptHookV SDK ([Download](http://dev-c.com/GTAV/scripthookv))
- C++ development environment (Visual Studio 2015 or later recommended)

## Usage
1. Download the ScriptHookV SDK
2. Open `samples\NativeTrainer\script.cpp` in the SDK
3. Replace the content with the `script.cpp` from this repository **(make sure to change the coordinates, icon, and name for your own blip)**
4. In `script.cpp`, modify the following variables to match your blip
5. Build the project in Visual Studio to generate the `.asi` file
6. Place the generated `.asi` file into the GTA5 main folder
7. Launch the game, and the custom blip will appear at the specified coordinates

```
the places that need to be changed.
BLIP_X      // X coordinate obtained from CodeWalker or similar
BLIP_Y      // Y coordinate obtained from CodeWalker or similar
BLIP_Z      // Z coordinate obtained from CodeWalker or similar
BLIP_ICON   // Blip icon ID
BLIP_NAME   // Name displayed on the map
```

- Example of popular blip icons:
     - `280` - Standard Pin / Waypoint
     - `475` - Office / Business
     - `358` - Garage / Ramp

> [!NOTE]
>
> If you rename the SDK folder or the NativeTrainer folder, the generated .asi file name will be based on the folder name.
> 
> Also, make sure to change the coordinates and icon ID; otherwise, the blip may appear at an unintended location with the wrong icon.
