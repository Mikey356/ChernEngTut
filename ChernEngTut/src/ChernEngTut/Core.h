#pragma once

#ifdef CT_PLATFORM_WINDOWS
	#ifdef CT_BUILD_DLL
		#define CHERNENGTUT_API _declspec(dllexport)
	#else
		#define CHERNENGTUT_API _declspec(dllexport)
	#endif
#else
	#error ChernEngTut only supports Windows!
#endif