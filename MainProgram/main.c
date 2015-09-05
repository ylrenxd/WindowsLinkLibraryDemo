#include <stdio.h>

//#include "..\\StaticLinkLibrary\\StaticLinkLibrary.h"
//#pragma comment(lib, "..\\Debug\\StaticLinkLibrary.lib")

//#include "..\\DynamicLinkLibrary\\DynamicLinkLibrary.h"
//#pragma comment(lib, "..\\Debug\\DynamicLinkLibrary.lib")

#include <Windows.h>
typedef int(*lpFunc)(int, int);

void main()
{
	/*printf("result = %d\n", add(2, 3));
	printf("result = %d\n", sub(2, 3));*/

	HINSTANCE hDll;
	lpFunc add, sub;

	hDll = LoadLibraryA("..\\Debug\\DynamicLinkLibrary.dll");
	if(hDll != NULL)
	{
		add = (lpFunc)GetProcAddress(hDll, "add");
		sub = (lpFunc)GetProcAddress(hDll, "sub");

		if(add != NULL)
			printf("result = %d\n", add(2, 3));
		if(sub != NULL)
			printf("result = %d\n", sub(2, 3));
	}
	FreeLibrary(hDll);
}