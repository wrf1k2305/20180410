 ///
 /// @file    nampspace5.cc
 /// @author  wrf1k2305(710162117@qq.com)
 /// @date    2018-04-10 14:24:16
 ///
 
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using std::cout;
using std::endl;

void func(void)
{
	cout << "func()" << endl;
}
int main(void)
{
	::printf("hello,world!\n");
	::func();
	
	return 0;
}
