 ///
 /// @file    string.cc
 /// @author  wrf1k2305(710162117@qq.com)
 /// @date    2018-04-10 20:50:48
 ///
 
#include <iostream>
using std::cout;
using std::endl;


void test0(void)
{
	using std::string;	
	cout << "c++风格字符串" << endl;

	string s1 = "hello";
	string s2 = "world";
	string s3 = s1 + s2;
	string s4;
	s4.append(s1).append(s2);//拼接s1和s2

	cout << "s3 =" << s3 << endl;
	cout << "s4 =" << s4 << endl;
	//求字符串的长度
	cout << "s4.size() = " << s4.size() << endl;
	cout << "s3.length() = "<< s3.length() << endl;
	
	//遍历字符串
	for(size_t idx = 0; idx != s4.size(); ++ idx)
	{
		cout << s4[idx] ;
	}
	cout << endl;
	//截取字符串中的子串
	string s5 = s4.substr(5,5);
	cout << "s5 = " << s5 << endl;
	
	//字符串比较
	string s6 = s5;
	cout << (s1 == s2) << endl;
	cout << (s1 != s2) << endl;
	cout << (s5 == s6) << endl;
	
	//将c++风格的字符串转换成c语言的字符串
	const char * p1 = s6.c_str();
	const char * p2 = s6.data();
	cout << "p1 = " << p1 << endl;
	cout << "p2 = " << p2 << endl;

}

int main(void)
{
	test0();
	return 0;
}
