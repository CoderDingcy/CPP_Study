#include<iostream>
using namespace std;
class Base
{
public:
	Base()
	{
		m_A = 100;
	}
	void func()
	{
		cout << "Base--func调用" << endl;
	}
	void func(int a)
	{
		cout << "Base--func(int a)调用" << endl;
	}
	int m_A;
};

class Son:public Base
{
public:
	Son()
	{
		m_A = 200;
	}
	void func()
	{
		cout << "Son--func调用" << endl;
	}
	int m_A;
};
//同名属性处理方式
void test01()
{
	Son s;
	//通过子类访问父类中的同名成员需要加作用域 
	cout << "Base类中的m_A为" << s.Base::m_A << endl;

	cout << "Son类中的m_A为" << s.m_A << endl;
}
//同名函数处理方式
void test02()
{
	Son s;
	s.func();
	s.Base::func();
	//如果子类中出现与父类中函数同名的函数，那么子类中的同名函数会隐藏掉所有的同名函数
	/*s.func(2);报错*/
	//如果想要访问到父类中被隐藏的同名函数，就要加作用域
	s.Base::func(100);
}
int main()
{
	test01();
	test02();

	system("pause");
}