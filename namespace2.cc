 ///
 /// @file    namespace2.cc
 /// @author  wrf1k2305(710162117@qq.com)
 /// @date    2018-04-10 10:35:35
 ///
 
#include <iostream>
using std::cout;
using std::endl;

namespace A
{
	int a = 10;
	void print()
	{
		cout << "I am namespace A" << endl;
		cout << "a = " << a << endl;
	}
}

namespace B
{
	int a = 100;
	void print()
	{
		cout << "I am namespace B" << endl;
		cout << "a = " << a << endl;
	}
}
int main(void)
{
	A::print();
	B::print();

	return 0;
}
