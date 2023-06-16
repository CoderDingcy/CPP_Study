#include<iostream>
using namespace std;
class Base1
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son1 :public Base1
{
public:
	void func()
	{
		m_A = 0;//父类公共权限成员到子类依然是公共
		m_B = 0;//父类中的保护权限成员到了子类中依然是保护权限
		/*m_C = 0;父类中的私有权限成员子类访问不到*/
}
};

class Son2 :protected Base1
{
public:
	void func()
	{
		m_A = 100;//protected
		m_B = 100;//protected
	/*	m_C = 100;不可访问*/
	}
};

class Son3 :private Base1
{
public:
	void func()
	{
		m_A = 100;
		m_B = 100;
		//m_C = 100;//父类中的私有成员，子类中无法访问
	}
};

class GrandSon3 :public Son3
{
public:
	void func()
	{
		//m_A = 100;//不可访问
	}
};
void test()
{
	Son1 s;
	s.m_A = 100;
	/*s.m_B = 100;外部不能访问*/
}
void test01()
{
	Son2 s;
	//s.m_A=100;//因为m_A为保护权限，所以类外访问不到
}
void test02()
{
	Son3 s;
	//s.m_A = 1000;//到Son3类中为私有成员在类外无法访问
	//s.m_B = 1000;
}
int main()
{
	system("pause");
}