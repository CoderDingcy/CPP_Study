#include<iostream>
using namespace std;
#include<string>
//string的构造函数

//string();          			   //创建一个空的字符串 例如: string str;
//string(const char* s); 	       //使用字符串s初始化
//string(const string& str);       //使用一个string对象初始化另一个string对象
//string(int n, char c);           //使用n个字符c初始化 

void test01()
{
	string s1;//默认构造

	const char* str = "Hello_World";
	string s2(str);
	cout << "str=" << s2 << endl;

	string s3(s2);
	cout << "s3=" << s3 << endl;	
	
	string s4(2,'a');
	cout << "s4=" << s4 << endl;


}

int main()
{
	test01();
	system("pause");
}