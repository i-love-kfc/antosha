#include "stdafx.h"

#ifdef DEBUG
ECORE_API BOOL bDebug = FALSE;

#endif

// Video
u32 psCurrentVidMode[2] = {1024, 768};
// release version always has "mt_*" enabled
Flags32 psDeviceFlags = {
    rsFullscreen | rsDetails | mtPhysics | mtSound | mtNetwork | rsDrawStatic | rsDrawDynamic | rsRefresh60hz};
