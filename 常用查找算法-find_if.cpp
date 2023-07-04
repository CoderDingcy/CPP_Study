#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

//常用查找算法 find_if

//内置数据类型
class Greater5
{
public:
	bool operator()(int val)
	{
		return val > 5;
	}
};
void test01()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
		v.push_back(i);
	vector<int>::iterator pos=find_if(v.begin(), v.end(), Greater5());
	if (pos == v.end())
		cout << "没有找到" << endl;
	else
	{
		cout << "找到了" << endl;
		cout << *pos << endl;
	}
}

//自定义数据类型
class Person
{
public:
	Person(string name,int age)
	{
		m_Age = age;
		m_Name = name;
	}

	int m_Age;
	string m_Name;
};

class Greater20
{
public:
	bool operator()(Person& p)
	{
		return p.m_Age > 20;
	}
};
void test02()
{
	vector<Person> v;
	Person p1("刘备", 12);
	Person p2("关于", 17);
	Person p3("张飞", 27);
	Person p4("诸葛亮", 14);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);

	//找一个年龄大于23的成员
	vector<Person>::iterator pos = find_if(v.begin(), v.end(), Greater20());
	if (pos == v.end())
		cout << "没有找到" << endl;
	else
	{
		cout << "找到了" << endl;
		cout << "姓名：" << pos->m_Name << " 年龄：" << pos->m_Age << endl;
	}
}

int main()
{
	test01();
	test02();
	system("pause");
}