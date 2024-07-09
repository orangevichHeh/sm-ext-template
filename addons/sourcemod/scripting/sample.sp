#include <sourcemod>
#include <sample>

public Plugin myinfo =
{
    name = "Sample",
    author = "Orange",
    description = "Sample plugin for sample extension",
    version = "0.0.0.1",
    url = "https://github.com/OrangevichHeh"
};

public void OnPluginStart()
{
    Sample_Loaded();
}