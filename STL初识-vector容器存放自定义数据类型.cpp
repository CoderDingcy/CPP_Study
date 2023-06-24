#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

//vector容器中存放自定义的数据类型

class Person
{
public:
	Person(string name, int age)
	{
		m_Age = age;
		m_Name = name;
	}

	string m_Name;
	int m_Age;
};

void myPrint(Person& p)
{
	cout << "姓名：" << p.m_Name << "   年龄：" << p.m_Age << endl;
}

void test01()
{
	vector<Person> v;

	Person p1("aaa", 12);
	Person p2("bbb", 22);
	Person p3("ccc", 32);
	Person p4("ddd", 42);
	Person p5("eee", 52);
	Person p6("fff", 62);

	//向容器添加数据
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);
	v.push_back(p6);

	//遍历输出
	
	for_each(v.begin(), v.end(), myPrint);
}

void test02()
{
	vector<Person*> v;

	Person p1("aaa", 12);
	Person p2("bbb", 22);
	Person p3("ccc", 32);
	Person p4("ddd", 42);
	Person p5("eee", 52);
	Person p6("fff", 62);

	//向容器添加数据
	v.push_back(&p1);
	v.push_back(&p2);
	v.push_back(&p3);
	v.push_back(&p4);
	v.push_back(&p5);
	v.push_back(&p6);

	//遍历输出
	for (vector<Person*>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "姓名：" << (*it)->m_Name << "   年龄：" << (*it)->m_Age << endl;
}
}

int main()
{
	test02();
	system("pause");
}