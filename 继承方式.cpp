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
		m_A = 0;//���๫��Ȩ�޳�Ա��������Ȼ�ǹ���
		m_B = 0;//�����еı���Ȩ�޳�Ա������������Ȼ�Ǳ���Ȩ��
		/*m_C = 0;�����е�˽��Ȩ�޳�Ա������ʲ���*/
}
};

class Son2 :protected Base1
{
public:
	void func()
	{
		m_A = 100;//protected
		m_B = 100;//protected
	/*	m_C = 100;���ɷ���*/
	}
};

class Son3 :private Base1
{
public:
	void func()
	{
		m_A = 100;
		m_B = 100;
		//m_C = 100;//�����е�˽�г�Ա���������޷�����
	}
};

class GrandSon3 :public Son3
{
public:
	void func()
	{
		//m_A = 100;//���ɷ���
	}
};
void test()
{
	Son1 s;
	s.m_A = 100;
	/*s.m_B = 100;�ⲿ���ܷ���*/
}
void test01()
{
	Son2 s;
	//s.m_A=100;//��Ϊm_AΪ����Ȩ�ޣ�����������ʲ���
}
void test02()
{
	Son3 s;
	//s.m_A = 1000;//��Son3����Ϊ˽�г�Ա�������޷�����
	//s.m_B = 1000;
}
int main()
{
	system("pause");
}