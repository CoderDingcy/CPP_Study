#include<iostream>
#include<string>
using namespace std;

template<class T1,class T2>
class Person
{
public:
	Person(T1 name,T2 age);
	void Show();
	T1 m_Name;
	T2 m_Age;
};

template<class T1,class T2>
Person<T1, T2>::Person(T1 name,T2 age)
{
	m_Name = name;
	m_Age = age;
}

template<class T1, class T2>
void Person<T1,T2>::Show()
{
	cout << "ÄêÁä£º" << m_Age << "   ĞÕÃû£º" << m_Name << endl;
}

void test01()
{
	Person<string, int> p("ËïÎò¿Õ", 999);
	p.Show();
}

int main()
{
	test01();
	system("pause");
}