#include<iostream>
#include<string>
using namespace std;


//类模版与函数模版的区别

template<class NameType=string,class AgeType=int>
class Person
{
public:
	Person(NameType name, AgeType age)
	{
		m_Name = name;
		m_Age = age;
	}
	
	void Show()
	{
		cout << "名字：" << m_Name<<endl;
		cout << "年龄：" << m_Age << endl;
	}

	AgeType m_Age;
	NameType m_Name;
};

//1、类模版没有自动类型推导的使用方式

void test01()
{
	//Person p1("孙悟空", 999);//编译器不会承认这种，类模版不能自动推导类型编译器会报错
	Person<string, int> p1("孙悟空", 999);
	p1.Show();
}

//2、类模版在模版的参数列表中可以有默认参数

void test02()
{
	Person<> p2("猪八戒", 1000);//因为这里已经将类模版的类型赋初值了，所有可以直接使用
	p2.Show();
}

int main()
{
	test01();
	test02();
	system("pause");
}