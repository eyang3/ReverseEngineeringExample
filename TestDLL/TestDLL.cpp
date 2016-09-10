// TestDLL.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "TestDLL.h"


// This is an example of an exported variable
TESTDLL_API int nTestDLL=0;

// This is an example of an exported function.
TESTDLL_API int fnTestDLL(void)
{
    return 42;
}

// This is the constructor of a class that has been exported.
// see TestDLL.h for the class definition
CTestDLL::CTestDLL(int n)
{
	number = n;    
}

int CTestDLL::AddOne() {
	return number + 1;
}

int CTestDLL::AddValue(int value) {
	return number + value;
}

