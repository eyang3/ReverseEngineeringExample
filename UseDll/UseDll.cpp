// UseDll.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "TestDLL.h"
#include <cstdlib>

int main()
{

	int x;
	std::cin >> x;
	CTestDLL y = CTestDLL(10);

	std::cout << "Hello World" << std::endl;
	std::cout << y.AddOne();
	std::cin>>x;
    return 0;
}

