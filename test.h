#ifdef _TESTDLL_H
#define _TESTDLL __declspec(dllexport)
#else 
#define _TESTDLL __declspec(dllimport)
#endif

_TESTDLL void PrintStr();

