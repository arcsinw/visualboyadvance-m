#ifndef _CONFIGMANAGER_H
#define _CONFIGMANAGER_H

#pragma once
#include "../sdl/filters.h"
#include <stdio.h>

#ifndef __GNUC__
#define HAVE_DECL_GETOPT 0
#define __STDC__ 1
#include "getopt.h"
#else // ! __GNUC__
#define HAVE_DECL_GETOPT 1
#include <getopt.h>
#endif // ! __GNUC__

#define MAX_CHEATS 16384

#ifndef __LIBRETRO__
extern bool cpuIsMultiBoot;
extern bool mirroringEnable;
extern bool parseDebug;
extern bool speedHack;
extern bool speedup;
#endif
extern char *rewindMemory;
extern const char *aviRecordDir;
extern const char *biosFileNameGB;
extern const char *biosFileNameGBA;
extern const char *biosFileNameGBC;
#ifndef __LIBRETRO__
extern const char *loadDotCodeFile;
extern const char *saveDotCodeFile;
#endif
extern const char *linkHostAddr;
extern const char *movieRecordDir;
extern const char *romDirGB;
extern const char *romDirGBA;
extern const char *romDirGBC;
extern const char *soundRecordDir;
extern int *rewindSerials;
extern int active;
extern int agbPrint;
extern int autoFire;
extern int autoFireMaxCount;
extern int autoFireToggle;
extern int autoFrameSkip;
extern int autoLoadMostRecent;
extern int autoPatch;
extern int autoSaveLoadCheatList;
extern int aviRecording;
extern int captureFormat;
#ifndef __LIBRETRO__
extern int cheatsEnabled;
extern int cpuDisableSfx;
extern int cpuSaveType;
#endif
extern int dinputKeyFocus;
extern int disableMMX;
extern int disableStatusMessages;
extern int dsoundDisableHardwareAcceleration;
extern int filterHeight;
extern int filterMagnification;
extern int filterMT; // enable multi-threading for pixel filters
extern int filter;
extern int filterWidth;
extern int frameSkip;
extern int frameskipadjust;
extern int fsAdapter;
extern int fsColorDepth;
extern int fsForceChange;
extern int fsFrequency;
extern int fsHeight;
extern int fsWidth;
extern int fullScreen;
extern int fullScreenStretch;
extern int gdbBreakOnLoad;
extern int gdbPort;
extern int glFilter;
extern int ifbType;
extern int joypadDefault;
extern int languageOption;
#ifndef __LIBRETRO__
extern int layerEnable;
extern int layerSettings;
#endif
extern int linkAuto;
extern int linkHacks;
extern int linkMode;
extern int linkNumPlayers;
extern int linkTimeout;
extern int maxScale;
extern int movieFrame;
extern int moviePlayFrame;
extern int moviePlaying;
extern int movieRecording;
extern int openGL;
extern int autoPatch;
extern int optFlashSize;
extern int optPrintUsage;
extern int paused;
extern int pauseWhenInactive;
extern int recentFreeze;
#ifndef __LIBRETRO__
extern int renderedFrames;
#endif
extern int rewindCount;
extern int rewindCounter;
extern int rewindPos;
extern int rewindSaveNeeded;
extern int rewindTimer;
extern int rewindTopPos;
// extern int romSize;
#ifndef __LIBRETRO__
extern int rtcEnabled;
extern int saveType;
#endif
extern int screenMessage;
extern int sensorX;
extern int sensorY;
extern int showRenderedFrames;
extern int showSpeed;
extern int showSpeedTransparent;
extern int sizeX;
extern int sizeY;
#ifndef __LIBRETRO__
extern int skipBios;
#endif
extern int skipSaveGameBattery;
extern int skipSaveGameCheats;
extern int soundRecording;
extern int speedupToggle;
extern int sunBars;
extern int surfaceSizeX;
extern int surfaceSizeY;
extern int threadPriority;
extern int tripleBuffering;
#ifndef __LIBRETRO__
extern int useBios;
#endif
extern int useBiosFileGB;
extern int useBiosFileGBA;
extern int useBiosFileGBC;
extern int videoOption;
extern int vsync;
extern int wasPaused;
extern int windowPositionX;
extern int windowPositionY;
extern int winFlashSize;
extern int winGbBorderOn;
extern int winGbPrinterEnabled;
extern int winPauseNextFrame;
extern uint32_t autoFrameSkipLastTime;
extern uint32_t movieLastJoypad;
extern uint32_t movieNextJoypad;
extern int throttle;

extern int preparedCheats;
extern const char *preparedCheatCodes[MAX_CHEATS];

// allow up to 100 IPS/UPS/PPF patches given on commandline
#define PATCH_MAX_NUM 100
extern int patchNum;
extern char *(patchNames[PATCH_MAX_NUM]); // and so on

extern int mouseCounter;

extern FilterFunc filterFunction;
extern IFBFilterFunc ifbFunction;

extern char *homeDir;
extern const char *screenShotDir;
extern const char *saveDir;
extern const char *batteryDir;

// Directory within homedir to use for default save location.
#define DOT_DIR ".vbam"

void SetHome(char *_arg0);
void SaveConfigFile();
void CloseConfig();
uint32_t ReadPrefHex(const char *pref_key, int default_value);
uint32_t ReadPrefHex(const char *pref_key);
uint32_t ReadPref(const char *pref_key, int default_value);
uint32_t ReadPref(const char *pref_key);
const char *ReadPrefString(const char *pref_key, const char *default_value);
const char *ReadPrefString(const char *pref_key);
void LoadConfigFile(int argc, char **argv);
void LoadConfig();
int ReadOpts(int argc, char **argv);
#endif
