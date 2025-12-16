#ifndef LAB4_EXPORT_H
#define LAB4_EXPORT_H

#if defined(_WIN32) || defined(_WIN64)
	#if defined(LAB4_BUILD_DLL)
		#define LAB4_API __declspec(dllexport)
	#else
		#define LAB4_API __declspec(dllimport)
	#endif
#else
	#define LAB4_API
#endif

#endif // LAB4_EXPORT_H