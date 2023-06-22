#include<iostream>
#include<string>
using namespace std;

//类模版对象做函数参数

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
		cout << "年龄：" << m_Age << endl;
		cout << "姓名：" << m_Name << endl;
	}
	T1 m_Name;
	T2 m_Age;
};
//1、指定传入类型

void printPerson1(Person<string, int>& p)
{
	p.Show();
}

void test01()
{
	Person<string, int> p1("猪八戒", 1000);
	printPerson1(p1);
}
//2、参数模版化
template<class T1,class T2>
void printPerson2(Person<T1,T2>& p)
{
	p.Show();
	cout << "T1的类型" << typeid(T1).name() << endl;
	cout << "T2的类型" << typeid(T2).name() << endl;
}

void test02()
{
	Person<string, int> p2("孙悟空",1000);
	printPerson2(p2);
}
//3、整个类模版化 
template<class T>
void printPerson3(T& p)
{
	p.Show();
	cout << "T的类型" << typeid(T).name() << endl;
}
void test03()
{
	Person<string, int> p3("沙和尚", 1001);
	printPerson3(p3);
}
int main()
{
	test01();
	test02();
	test03();
	system("pause");
}
//第一种指定类型最常用