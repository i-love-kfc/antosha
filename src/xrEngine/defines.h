#pragma once

#ifdef DEBUG
ENGINE_API extern BOOL bDebug;
#else
#define bDebug 0
#endif

// psDeviceFlags
enum
{
    rsFullscreen = (1ul << 0ul),
    rsClearBB = (1ul << 1ul),
    rsVSync = (1ul << 2ul),
    rsWireframe = (1ul << 3ul),
    rsOcclusion = (1ul << 4ul),
    rsStatistic = (1ul << 5ul),
    rsDetails = (1ul << 6ul),
    rsRefresh60hz = (1ul << 7ul),
    rsConstantFPS = (1ul << 8ul),
    rsDrawStatic = (1ul << 9ul),
    rsDrawDynamic = (1ul << 10ul),
    rsDisableObjectsAsCrows = (1ul << 11ul),

    rsOcclusionDraw = (1ul << 12ul),
    rsOcclusionStats = (1ul << 13ul),

    mtSound = (1ul << 14ul),
    mtPhysics = (1ul << 15ul),
    mtNetwork = (1ul << 16ul),
    mtParticles = (1ul << 17ul),

    rsCameraPos = (1ul << 18ul),
    rsDrawFPS = (1ul << 19ul),
	rsDrawMemory = (1ul << 20ul),	//Romann

    rsR1 = (1ul << 21ul),
    rsR2 = (1ul << 22ul),
    rsR3 = (1ul << 23ul),
    rsR4 = (1ul << 24ul), // 22 was reserved for editor
    rsRGL = (1ul << 25ul), // 23 was reserved for editor
    // 25-32 bit - reserved to Editor
	rsRefresh120hz = (1ul << 26ul),
};


ENGINE_API extern u32 psCurrentVidMode[];
ENGINE_API extern Flags32 psDeviceFlags;

#include "Common/FSMacros.hpp"
