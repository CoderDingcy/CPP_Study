#include<iostream>
using namespace std;

class Base
{
public:
	//纯虚函数
	//只要有一个纯虚函数，该类就为抽象类
	//抽象类特点：
	//1、无法实例化对象
	//2、抽象类中的子类，必须要重写父类中的纯虚函数，否则也为抽象类
	virtual void func() = 0;
};

class Son :public Base
{
public:
	void func()
	{
		cout << "重写纯虚函数" << endl;
	}
};

void test01()
{
	Base* base = new Son;
	base->func();
}
int main()
{
	test01();
	system("pause");
}