#include<iostream>
using namespace std;
//ͨ��ȫ�ֺ�����ӡ��Ϣ

//��ǰ�ñ�����֪��Person��Ĵ���
template<class T1,class T2>
class Person;

//����ʵ��
template<class T1, class T2>
void Print2(Person<T1, T2>& p)
{
	cout << "����ʵ��--������" << p.m_Name << "   ����ʵ��--���䣺" << p.m_Age << endl;
}

template<class T1,class T2>
class Person
{
	//ȫ�ֺ��� ����ʵ��
	friend void Print(Person<T1,T2>& p)
	{
		cout << "������" << p.m_Name << "   ���䣺" << p.m_Age << endl;
	}

	//ȫ�ֺ��� ����ʵ��
	//�ӿ�ģ������б�
	//���ȫ�ֺ���ʱ����ʵ�ֵĻ�����Ҫ�ñ�������ǰ֪�������������
	friend void Print2<>(Person<T1, T2>& p);
public:
	Person(T1 name, T2 age)
	{
		m_Name = name;
		m_Age = age;
	}
private:
	T1 m_Name;
	T2 m_Age;

};


//ȫ�ֺ�������ʵ��
void test01()
{
	Person<string, int> p1("��˽�", 18);	
	Print(p1);
}

//ȫ�ֺ�������ʵ��
void test02()
{
	Person<string, int> p2("�����", 19);
	Print2(p2);
}

int main()
{
	test01();
	test02();
	system("pause");
}