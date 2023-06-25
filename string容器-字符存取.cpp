#include<iostream>
using namespace std;
#include<string>

//字符存取
void test01()
{
	string str1 = "Hello_World";
	//1、通过[]方式来进行单个字符的存取
		for (int i = 0; i < str1.size(); i++)
		{
			cout<<str1[i]<<" ";
	}
		cout << endl;
	//2、通过at方式来进行单个字符的存取
		for (int i = 0; i < str1.size(); i++)
		{
			cout << str1.at(i) << " ";
		}
		cout << endl;

		//修改单个字符
		str1[0] = 'x';
		str1.at(1) = 'x';
		cout << str1 << endl;
}
int main()
{
	test01();
	system("pause");
}