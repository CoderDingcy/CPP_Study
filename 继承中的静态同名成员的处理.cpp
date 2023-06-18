#include<iostream>
using namespace std;

class Base
{
public:
	static int m_A;
	static void func()
	{
		cout << "Base---func" << endl;
	}
	static void func(int a)
	{
		cout << "Base---func(int)" << endl;
	}
};

int Base::m_A = 100;

class Son :public Base
{
public:
	static int m_A;
	static void func()
	{
		cout << "Base---func" << endl;
	}
};

int Son::m_A = 200;
//同名静态成员属性
void test01()
{
	Son s;
	//1、通过对象访问
	/*cout << "Base类的m_A为" << s.Base::m_A << endl;
	cout << "Son类的m_A为" << s.m_A << endl;*/
	//2、通过类名访问
	cout << "Base类的m_A为" << Base::m_A << endl;
	cout << "Son类的m_A为" << Son::m_A << endl;
	cout << "Son类的m_A为" << Son::Base::m_A << endl;
}

void test02()
{
	//1、通过对象名来访问
	Son s;
	s.func();
	s.Base::func();
	s.Base::func(100);
	//1、通过类名来访问
	Son::func();
	Son::Base::func();
	Son::Base::func(1200);
}
int main()
{
	/*test01();*/
	test02();
	system("pause");
}