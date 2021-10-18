//{{NO_DEPENDENCIES}}
// Microsoft Visual C++ generated include file.
// Used by duckstation-qt.rc
//
#define IDI_ICON1                       102

// Next default values for new objects
// 
#ifdef APSTUDIO_INVOKED
#ifndef APSTUDIO_READONLY_SYMBOLS
#define _APS_NEXT_RESOURCE_VALUE        103
#define _APS_NEXT_COMMAND_VALUE         40001
#define _APS_NEXT_CONTROL_VALUE         1001
#define _APS_NEXT_SYMED_VALUE           101
#endif
#endif

// Add Version info
//
const auto DUCK_VersionHi = string(g_scm_tag_hi_str);
const auto DUCK_VersionMid = string(g_scm_tag_med_str);
const auto DUCK_VersionLo = string(g_scm_tag_lo_str);

#define STRINGIZE2(s) #s
#define STRINGIZE(s) STRINGIZE2(s)

#define VER_FILE_VERSION            DUCK_VersionHi, DUCK_VersionMid, DUCK_VersionLo, 0
#define VER_FILE_VERSION_STR        STRINGIZE(DUCK_VersionHi)        \
                                    "." STRINGIZE(DUCK_VersionMid)    \
                                    "." STRINGIZE(DUCK_VersionLo) \
                                    "." STRINGIZE(0)    \
                                    
#define VER_PRODUCT_VERSION         VER_FILE_VERSION
#define VER_PRODUCT_VERSION_STR     VER_FILE_VERSION_STR
