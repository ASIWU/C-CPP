//bzj^_^
//returnref.cpp

#include <iostream>

int& getVar(int* p) { return *p; }

int  main()
{
	int a = 10, b;

	b = getVar(&a) * 12;
	getVar(&a) = 200;
	std::cout << a << ' ' << b << std::endl;

	return 0;
}
