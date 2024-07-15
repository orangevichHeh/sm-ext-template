# Requirements
- [SourceMod (1.12)](https://www.sourcemod.net/)
- [MM:Source (2.0)](https://www.sourcemm.net/)

# Prepare
 - Install all [SDKs, Sourcemod and Metamod:Source](https://wiki.alliedmods.net/Building_SourceMod#Downloading_Source_and_Dependencies)
 - Add SDKs, Sourcemod and Metamod:Source to **Enviroments**:
    - *HL2SDK* (e.g. `D:\alliedmodders\hl2sdk-episode1`)
    - *HL2TF2* (e.g. `D:\alliedmodders\hl2sdk-tf2`)
    - e.t.c.
    - *SOURCEMOD* (e.g. `D:\alliedmodders\sourcemod`)
    - *METAMOD* (e.g. `D:\alliedmodders\metamod-source`)
 - Clone template to sourcemod/extensions 
 - Launch sm-ext-template/msvc/sdk.sln
 - Code

# After
 - Install AMBuild
 - Create build folder
 - Goto build folder and run a command prompt
 - Run `python3 ../configure.py`
   - On linux run `CC=clang CXX=clang++ python3 ../configure.py` 
 - Then `ambuild`

# Afterwords
If you want to add a new **.cpp** file to the project, you need to add a new line in the **AMBuilder** file in the sourceFiles array, as well as your file name

# Credits
 - [Sourcemod](https://github.com/alliedmodders/sourcemod/)
 - [Writing Extensions](https://wiki.alliedmods.net/Writing_Extensions)