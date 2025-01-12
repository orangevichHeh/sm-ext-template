# Sourcemod Extension Template
This template is created for a quick start of sourcemod extension development. I do not claim that my template is correct. This project has a Visual Studio solution with included headers from `sourcemod/public`, as well as CDetour (added `IGameConfigs.h` to detours.h) and safetyhook (built with ambuild). \
Template uses c++20. \
Included `safetyhook` and `CDetour`.

## Requirements
 - SourceMod 1.12
 - MM:Source 1.12
 - Python 3.3 or greater
 - [AMBuild 2.2](https://github.com/alliedmodders/ambuild)
 - Windows: 
   - MSVC 2019 16.11 (v1929)
   - [Visual Studio 2022](https://visualstudio.microsoft.com/) and Dependencies:
     - MSVC v140 - VS 2015 C++ build tools (v14.00)
     - MSVC v141 - VS 2017 C++ build tools x64 or x86 (v14.16)
     - MSVC v142 - VS 2019 C++ build tools x64 or x86 (v14.29-16.11) <- preferably
     - Windows Universal CRT SDK
     - Windows 10 SDK
 - Linux:
   - `clang-16` or greater *OR* `gcc-8` or greater
   - Ubuntu/Debian:
     - `dpkg --add-architecture i386`
	 - `apt get install clang lib32stdc++6 lib32z1-dev libc6-dev-i386 linux-libc-dev:i386`
     - `apt get install g++-multilib` (for x64 system)
   - ArchLinux:
     - Enable multilib repository
	 - `pacman -S gcc-multilib lib32-glibc lib32-libstdc++5 lib32-zlib`

## Prepare
 - Install all [SDKs, Sourcemod and Metamod:Source](https://wiki.alliedmods.net/Building_SourceMod#Downloading_Source_and_Dependencies)
 - Add SDKs, Sourcemod and Metamod:Source to **Enviroments**:
    - *HL2SDK* (e.g. `D:\alliedmodders\hl2sdk-episode1`)
    - *HL2SDKTF2* (e.g. `D:\alliedmodders\hl2sdk-tf2`)
    - e.t.c.
    - *SOURCEMOD* (e.g. `D:\alliedmodders\sourcemod`)
    - *MMSOURCE* (e.g. `D:\alliedmodders\metamod-source`)
 - Clone recursive template to alliedmodders/sourcemod/extensions
 - Launch sm-ext-template/msvc/sdk.sln
 - Code

## Configuring & Building
 - Create build folder
 - Goto build folder
 - Run `python3 ../configure.py --enable-optimize`
   - On Linux run `CC=clang CXX=clang++ python3 ../configure.py --enable-optimize`
   - On Windows: 
     - Run `Developer Command Prompt for VS 2022` or with default cmd opens bat `%ProgramFiles%\Microsoft Visual Studio\2022\Community\VC\Auxiliary\Build\vcvars*.bat` or `%ProgramFiles%\Microsoft Visual Studio\2022\Community\Common7\Tools\VsDevCmd.bat`
	 - Change working directory to build folder of extension and run `py ../configure.py --enable-optimize`
 - Then `ambuild`
 - Result of build in `package` directory

## Afterwords
1. To rename the extension from `sample` to another extension, you need to navigate through the following files:
   - [AMBuilder](https://github.com/orangevichHeh/sm-ext-template/blob/main/AMBuilder#L5)
   - [smsdk_config.h](https://github.com/orangevichHeh/sm-ext-template/blob/main/src/smsdk_config.h#L41-L48)
   - [natives.cpp](https://github.com/orangevichHeh/sm-ext-template/blob/main/src/natives/natives.cpp#L4-L10)
   - [extension.h](https://github.com/orangevichHeh/sm-ext-template/blob/main/src/extension.h#L49)
   - [extension.cpp](https://github.com/orangevichHeh/sm-ext-template/blob/main/src/extension.cpp#L39-L55)
   - Comments in source code
1. If you want to add a new **.cpp** file to the project, you need to add a new line in the [AMBuilder#L8](https://github.com/orangevichHeh/sm-ext-template/blob/main/AMBuilder#L8) file in the sourceFiles array.
1. To build x64, add the `--targets=x86_64` argument to configure.py (e.g. `py ../configure.py --targets=x86_64`).
1. To build specific games, add the `--sdks` argument by listing the sdks separated by commas (e.g. `py ../configure.py --sdks=tf2,l4d2`).
1. If your extension will not be included for plugins, but for example will hook some functions, you can create an autoload file that will load the extension with the server automatically. To do this, in the `addons/sourcemod` folder make a directory `extensions` and in it create a file `name.autoload`, where _name_ is the name of your extension.
1. To disable/remove the safetyhook/cdetour you need to comment out or delete the line in the [AMBuilder#L34](https://github.com/orangevichHeh/sm-ext-template/blob/main/AMBuilder#L34) 

## `PackageScript` File
This file is used to add the necessary files for your expansion to work, like for example: gamedata, config or autoload.
To add autoload you need to uncomment the following lines (Autoload extension): [PackageScript#L49-51](https://github.com/orangevichHeh/sm-ext-template/blob/main/PackageScript#L49-L51)


## Credits
 - [SourceMod](https://github.com/alliedmodders/sourcemod/)
 - [SourceMod Sample Extension](https://github.com/alliedmodders/sourcemod/tree/master/public/sample_ext)
 - [Building SourceMod](https://wiki.alliedmods.net/Building_SourceMod)
 - [Writing Extensions](https://wiki.alliedmods.net/Writing_Extensions)
