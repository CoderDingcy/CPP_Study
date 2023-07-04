#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

//常用查找算法 count_if

//统计内置数据类型
class Greater10
{
public:
	bool operator()(int val)
	{
		return val > 10;
	}
};

void test01()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(10);
	v.push_back(10);
	v.push_back(10);
	v.push_back(10);
	v.push_back(10);

	int num = count_if(v.begin(), v.end(),Greater10());

	cout << "大于10的元素在容器中的个数统计为" << num << "个" << endl;
}

//统计自定义数据类型
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

class Greater20
{
public:
	//统计年龄大于20的元素个数
	bool operator()(const Person& p)
	{
		return p.m_Age > 20;
	}
};

void test02()
{
	Person p1("刘备", 34);
	Person p2("关于", 24);
	Person p3("张飞", 54);
	Person p4("赵云", 64);
	Person p5("诸葛亮", 14);

	vector<Person> v;
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);


	int num = count_if(v.begin(), v.end(),Greater20());
	cout << "年龄大于20的人数为" << num << "人" << endl;
}
int main()
{
	//test01();
	test02();
	system("pause");
}