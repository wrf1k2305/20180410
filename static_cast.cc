 ///
 /// @file    static_cast.cc
 /// @author  wrf1k2305(710162117@qq.com)
 /// @date    2018-04-10 19:35:22
 ///
#include <stdlib.h>
#include <iostream>
using std::cout;
using std::endl;

int test0(void)
{
	double d1 = 5.55;
	int a = (int)d1;
	int b = int(d1);
	cout << a << endl;
	cout << b << endl;
}

int test1(void)
{
	double d1 = 5.55;
	int a = static_cast<int>(d1);
	cout << "a = " << a << endl;
	int * p1 = static_cast<int *>(malloc(sizeof(int)));
	*p1 = 10;
	cout << "*p1 = " << *p1 << endl;
	free(p1);
}
int main()
{
	test0();
	test1();
}
