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
//ͬ����̬��Ա����
void test01()
{
	Son s;
	//1��ͨ���������
	/*cout << "Base���m_AΪ" << s.Base::m_A << endl;
	cout << "Son���m_AΪ" << s.m_A << endl;*/
	//2��ͨ����������
	cout << "Base���m_AΪ" << Base::m_A << endl;
	cout << "Son���m_AΪ" << Son::m_A << endl;
	cout << "Son���m_AΪ" << Son::Base::m_A << endl;
}

void test02()
{
	//1��ͨ��������������
	Son s;
	s.func();
	s.Base::func();
	s.Base::func(100);
	//1��ͨ������������
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