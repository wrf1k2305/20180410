 ///
 /// @file    inline.cc
 /// @author  wrf1k2305(710162117@qq.com)
 /// @date    2018-04-10 20:16:55
 ///
 
#include <iostream>
using std::cout;
using std::endl;

inline const  char* dbtest(int a)
{
	return (a % 2 > 0) ? "奇" : "偶";
}
int main()
{
	int i;
	for(i = 1;i < 100;i++)
		cout << "i = " << i << "奇偶性:" << dbtest(i) << endl;
}
