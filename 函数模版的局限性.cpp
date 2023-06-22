#include<iostream>
#include<string>
using namespace std;

//模版局限性
//模板并不是万能的，有些特定的数据类型，需要用具体化方式做特殊实现

class Person
{
public:
	Person(string name, int age)
	{
		m_Name = name;
		m_Age = age;
	}
	int m_Age;
	string m_Name;
};

//对比模版
template<class T>
bool my_Compare(T& a, T& b)
{
	if (a==b)
		return true;
	else
		return false;
}

//提供一个具体的Person的版本
//模版的重载
template<> bool my_Compare(Person& p1, Person& p2)
{
	if (p1.m_Name == p2.m_Name && p2.m_Age == p1.m_Age)
		return true;
	else
		return false;
}

void test01()
{
	int a = 10;
	int b = 20;

	bool ret = my_Compare(a, b);
	if (ret)
		cout << "a=b" << endl;
	else
		cout << "a!=b" << endl;
}

void test02()
{
	Person p1("Tom", 10);
	Person p2("Tom", 10);
	bool ret = my_Compare(p1, p2);
	if (ret)
		cout << "p1与p2相等" << endl;
	else
		cout << "p1与p2不相等" << endl;
}

int main()
{
	test01();
	test02();
	system("pause");
}