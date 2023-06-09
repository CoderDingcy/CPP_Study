#include<iostream>
using namespace std;
//通过全局函数打印信息

//提前让编译器知道Person类的存在
template<class T1,class T2>
class Person;

//类外实现
template<class T1, class T2>
void Print2(Person<T1, T2>& p)
{
	cout << "类外实现--姓名：" << p.m_Name << "   类外实现--年龄：" << p.m_Age << endl;
}

template<class T1,class T2>
class Person
{
	//全局函数 类内实现
	friend void Print(Person<T1,T2>& p)
	{
		cout << "姓名：" << p.m_Name << "   年龄：" << p.m_Age << endl;
	}

	//全局函数 类外实现
	//加空模版参数列表
	//如果全局函数时类外实现的话，需要让编译器提前知道这个函数存在
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


//全局函数类内实现
void test01()
{
	Person<string, int> p1("猪八戒", 18);	
	Print(p1);
}

//全局函数类内实现
void test02()
{
	Person<string, int> p2("孙悟空", 19);
	Print2(p2);
}

int main()
{
	test01();
	test02();
	system("pause");
}