#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

//常用查找算法
//find

//查找内置数据类型
void test01()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
		v.push_back(i);
	vector<int>::iterator pos = find(v.begin(), v.end(), 50);
	if (pos == v.end())
		cout << "没有找到" << endl;
	else
	{
		cout << "找到了" << endl;
		cout << "输出元素值为"<< * pos << endl;
	}
}

//查找自定义的数据类型
class Person
{
public:
	Person(string name, int age)
	{
		m_Age = age;
		m_Name = name;
	}

	//重载== 让底层的find算法知道该怎么对比
	bool operator==(const Person& p)
	{
		if (m_Age == p.m_Age && m_Name == p.m_Name)
			return true;
		else
			return false;
	}
	int m_Age;
	string m_Name;
};
void test02()
{
	vector<Person> v;
	Person p1("张飞", 16);
	Person p2("张路", 26);
	Person p3("赵云", 36);
	Person p4("刘备", 46);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);

	vector<Person>::iterator pos = find(v.begin(), v.end(), p2);
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
	//test01();
	test02();
	system("pause");
}