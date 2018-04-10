 ///
 /// @file    reference2.cc
 /// @author  wrf1k2305(710162117@qq.com)
 /// @date    2018-04-10 16:54:46
 ///
 
#include <iostream>
using std::cout;
using std::endl;

void swap(int &a,int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

int main()
{
	int a = 3, b = 4;
	cout << "before swap: a = " << a << ",b = " << b << endl;
	swap(a,b);
	cout << "after swap: a = " << a << ",b = " << b << endl;
	return 0;
}
