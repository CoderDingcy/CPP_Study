#include<iostream>
#include<string>
using namespace std;

//string求子串

void test01()
{
	string str = "abcde";
	string strSub = str.substr(1, 2);
	cout << strSub<<endl;
}

//实用案例
void test02()
{
	string email = "2284858868@qq.com";

	//从邮件地址中获取用户名信息
	//获取QQ号
	//首先找@符号

	int pos = email.find('@');
	string str = email.substr(0, pos);//参数（开始的位置，截多少个字符）
	cout << str<<endl;
}

int main()
{
	/*test01();*/
	test02();
	system("pause");
}