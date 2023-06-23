#include<iostream>
#include<string>
using namespace std;

//类模版的分文件编写问题及解决

//第一种方法直接包含源文件#include"Person.cpp"
//因为类模版的成员函数只有调用时才会实现所有包含Person.h无法得知函数具体情况，即使建立对象也无法使用函数
//如果包含源文件可以直接看到函数实现，并且通过源文件包含的头文件也可以看到头文件的信息

//第二种方法 将.h和.cpp文件中的内容写到一起并把文件名命名为.hpp文件
#include"Person.hpp"
//第一种方法不常用，一般使用第二种方法

//template<class T1,class T2>
//class Person
//{
//public:
//	Person(T1 name, T2 age);
//	void Show();
//	T1 m_Name;
//	T2 m_Age;
//};

//template<class T1,class T2>
//Person<T1, T2>::Person(T1 name, T2 age)
//{
//	m_Name = name;
//	m_Age = age;
//}
//
//template<class T1, class T2>
//void Person<T1, T2>::Show()
//{
//	cout << "姓名：" << m_Name << "   年龄：" << m_Age << endl;
//}

void test01()
{
	Person<string, int> p("猪八戒", 14);
	p.Show();
}
int main()
{
	test01();
	system("pause");
}