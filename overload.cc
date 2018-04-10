 ///
 /// @file    overload.cc
 /// @author  wrf1k2305(710162117@qq.com)
 /// @date    2018-04-10 19:55:08
 ///
 
#include <iostream>
using std::cout;
using std::endl;

void Swap(int &a,int &b)
{
	int temp = a;
	a = b;
	b = temp;
}
void Swap(float &a,float &b)
{
	float temp = a;
	a = b;
	b = temp;
}
void Swap(char &a,char &b)
{
	char temp = a;
	a = b;
	b = temp;
}
int main()
{
	int a = 1, b = 10;
	float c =3.1, d = 4.2;
	char e = 'e', f= 'f';
	Swap(a,b);
	cout << "a = " << a << " b = " << b << endl;
	Swap(c,d);;
	cout << "c = " << c << " d = " << d << endl;
	Swap(e,f);
	cout << "e = " << e << " f = " << f << endl;
}
