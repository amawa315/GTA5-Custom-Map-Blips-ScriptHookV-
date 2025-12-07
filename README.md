# GTA5 Custom Map Blips (ScriptHookV)

This script is a C++ ScriptHookV script for GTA5 that adds custom blips (pins, offices, etc.) to the in-game map.

## Features
- Add blips (map icons) to any coordinates
- Supports pins, offices, buildings, and other icons
- Blip names can be displayed in Japanese
- Easily change coordinates, icons, and colors

## Requirements
- GTA5
- ScriptHookV SDK ([Download](http://dev-c.com/GTAV/scripthookv))
- C++ development environment (Visual Studio 2015 or later recommended)

## Usage
1. Download the ScriptHookV SDK from the link above
2. Open `ScriptHookV_SDK_1.0.617.1a.zip\samples\NativeTrainer\script.cpp` in the SDK
3. Replace the contents of the script with the files from this repository (change coordinates or icons as needed)
4. Build the project in Visual Studio to generate the `.asi` file
5. Place the generated `.asi` file into the GTA5 main folder
6. Launch the game, and the custom blip will appear at the specified coordinates

> [!NOTE]
>
> If you rename the NativeTrainer folder, the resulting `.asi` file name will be based on the folder name.
