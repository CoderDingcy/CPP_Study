#include<iostream>
using namespace std;
#include<string>

//字符串比较
//使用ASCII码值进行比较：
//如果相等返回0 大于返回1 小于返回-1
void test01()
{
	string str1 = "hello";
	string str2 = "hello";
	if (str1.compare(str2) == 0)
		cout << "两字符串相等！" << endl;
	else
		cout << "两字符串不相等！" << endl;
}
int main()
{
	test01();
	system("pause");
}