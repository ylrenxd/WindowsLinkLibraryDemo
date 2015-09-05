#ifndef _DYNAMIC_LINK_LIBRARY_
#define _DYNAMIC_LINK_LIBRARY_

#ifdef DYNAMICLINKLIBRARY_EXPORTS	//预处理器自动定义DYNAMICLINKLIBRARY_EXPORTS
#define DLL_API _declspec(dllexport)
#else
#define DLL_API _declspec(dllimport)
#endif

#ifdef __cplusplus
extern "C"
{
#endif

	DLL_API int add(int a, int b);
	DLL_API int sub(int a, int b);

#ifdef __cplusplus
};
#endif

#endif	//_DYNAMIC_LINK_LIBRARY_