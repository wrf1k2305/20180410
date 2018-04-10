 ///
 /// @file    reference.cc
 /// @author  wrf1k2305(710162117@qq.com)
 /// @date    2018-04-10 15:37:25
 ///
 
#include <iostream>
using std::cout;
using std::endl;

int main(void)
{
	int number = 10;
	int &pn = number;
	int b = 5;
	pn = b;
	number = 20;
	cout << "number = " << number << endl;
	cout << "pn = " << pn << endl;
	return 0;
}
