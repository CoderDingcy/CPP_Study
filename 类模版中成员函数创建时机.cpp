#include<iostream>
using namespace std;

//类模版中成员函数创建时机
//类模版中成员函数在调用时才被创建

class Person1
{
public:
	void ShowPerson1()
	{
		cout << "Person1 Show" << endl;
	}
};

class Person2
{
public:
	void ShowPerson2()
	{
		cout << "Person2 Show" << endl;
	}
};

template<class T>
class Person
{
public:
	T obj;
	//下面两个函数不会报错，因为类模版的成员函数只有调用时才会被创建
	void func1()
	{
		obj.ShowPerson1();
	}

	void func2()
	{
		obj.ShowPerson2();
	}
};

void test01()
{
	Person<Person1> p1;
	p1.func1();
	Person<Person2> p2;
	p2.func2();
}

int main()
{
	test01();
	system("pause");
}