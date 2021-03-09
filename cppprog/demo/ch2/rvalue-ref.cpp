//bzj^_^
//rvalue-ref.cpp

#include <iostream>

int f() { int x = 3; return x; }

int main()
{
	int a = 0;
	//int&& rra = a; //error
	int&& rra = std::move(a);
	int&& rrb = f(); //ok but not good

    ++rra;
	std::cout << a << ',' << rra << std::endl;
    rra = rrb; //not good

	return 0;
}
