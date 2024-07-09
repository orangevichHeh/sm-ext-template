#include "natives.h"

static cell_t Extension_Loaded(IPluginContext* pContext, const cell_t* params) {
	smutils->LogMessage(myself, "Sample extension has been loaded.");
	return 0;
}

const sp_nativeinfo_t g_ExtensionNatives[] =
{
	{ "Sample_Loaded",                    Extension_Loaded },
	{ nullptr,                              nullptr }
};