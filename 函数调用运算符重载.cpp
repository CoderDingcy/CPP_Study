#include<iostream>
#include<string>
using namespace std;
class Myprint
{
public:
	void operator()(string test)//函数调用运算符重载
	{
		cout << test << endl;
	}
};

void print(string name)
{
	cout << name << endl;
}
//仿函数非常灵活
class jai
{
public:
	int operator()(int a, int b)
	{
		return a + b;
	}
};
int main()
{
	jai j;
	cout << j(1, 2) << endl;
	cout << jai()(2, 2) << endl;//创建匿名对象，这里稍微复习一下
	Myprint p;
	p("ni");//因为和函数调用非常相似，因此被称为仿函数
	print("niwo");
	system("pause");
}