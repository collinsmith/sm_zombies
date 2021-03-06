#if defined _compiler_settings_included
  #endinput
#endif
#define _compiler_settings_included

/**
 * Zombies should enforce semicolons (good practices)
 */
#pragma semicolon 1

/**
 * Zombies uses \ as ctrlchar
 */
#pragma ctrlchar '\\'

/**
 * Zombies enforces SourcePawn 1.7+ spec
 */
#pragma newdecls required

/**
 * Enables whether or not to compile in debug mode. Compiling in debug mode will
 * enable many additional commands and log messages that are not needed for
 * standard use.
 */
#define ZM_DEBUG_MODE