 ///
 /// @file    reference3.cc
 /// @author  wrf1k2305(710162117@qq.com)
 /// @date    2018-04-10 18:45:54
 ///
 
#include <iostream>
using std::cout;
using std::endl;

int arr[5] = {1, 2, 3, 4, 5};

int & getValue(int idx)
{
	return arr[idx];
}
/*int & func()
{
	int a = 10;
	return a;
}*/

/*int * func()
{
	int a = 10;
	return &a;
}*/
int &  func()
{
	int * p = new int(12);
	return *p;
}
int main()
{
	//int *p;//野指针
	//cout << "p = " << p << endl;
	
	cout << "arr[4]" << getValue(4) << endl;
	cout << "arr[4]" << arr[4] << endl;
	cout << "ref = " << func << endl;
}
