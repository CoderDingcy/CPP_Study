#include<iostream>
#include<string>
using namespace std;

//��ģ���������������

template<class T1,class T2>
class Person
{
public:
	Person(T1 name, T2 age)
	{
		m_Name = name;
		m_Age = age;
	}
	void Show()
	{
		cout << "���䣺" << m_Age << endl;
		cout << "������" << m_Name << endl;
	}
	T1 m_Name;
	T2 m_Age;
};
//1��ָ����������

void printPerson1(Person<string, int>& p)
{
	p.Show();
}

void test01()
{
	Person<string, int> p1("��˽�", 1000);
	printPerson1(p1);
}
//2������ģ�滯
template<class T1,class T2>
void printPerson2(Person<T1,T2>& p)
{
	p.Show();
	cout << "T1������" << typeid(T1).name() << endl;
	cout << "T2������" << typeid(T2).name() << endl;
}

void test02()
{
	Person<string, int> p2("�����",1000);
	printPerson2(p2);
}
//3��������ģ�滯 
template<class T>
void printPerson3(T& p)
{
	p.Show();
	cout << "T������" << typeid(T).name() << endl;
}
void test03()
{
	Person<string, int> p3("ɳ����", 1001);
	printPerson3(p3);
}
int main()
{
	test01();
	test02();
	test03();
	system("pause");
}
//��һ��ָ���������