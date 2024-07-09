#if defined _sample_included
  #endinput
#endif
#define _sample_included

/**
 * Write if extension was been loaded
 *
 * @noreturn
 */
native void Sample_Loaded();

public Extension __ext_sample = 
{
	name = "sample",
	file = "sample.ext",
#if defined AUTOLOAD_EXTENSIONS
	autoload = 1,
#else
	autoload = 0,
#endif
#if defined REQUIRE_EXTENSIONS
	required = 1,
#else
	required = 0,
#endif
};

#if !defined REQUIRE_EXTENSIONS
public void __ext_sample_SetNTVOptional()
{
    MarkNativeAsOptional("Sample_Loaded");
}
#endif