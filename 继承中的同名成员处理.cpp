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
		cout << "Base--func����" << endl;
	}
	void func(int a)
	{
		cout << "Base--func(int a)����" << endl;
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
		cout << "Son--func����" << endl;
	}
	int m_A;
};
//ͬ�����Դ���ʽ
void test01()
{
	Son s;
	//ͨ��������ʸ����е�ͬ����Ա��Ҫ�������� 
	cout << "Base���е�m_AΪ" << s.Base::m_A << endl;

	cout << "Son���е�m_AΪ" << s.m_A << endl;
}
//ͬ����������ʽ
void test02()
{
	Son s;
	s.func();
	s.Base::func();
	//��������г����븸���к���ͬ���ĺ�������ô�����е�ͬ�����������ص����е�ͬ������
	/*s.func(2);����*/
	//�����Ҫ���ʵ������б����ص�ͬ����������Ҫ��������
	s.Base::func(100);
}
int main()
{
	test01();
	test02();

	system("pause");
}