#include<iostream>
#include<set>
#include<string>
using namespace std;

//������������
class myCompare
{
public:
	bool operator()(int v1, int v2)const
	{
		return v1 > v2;
	}
};

class Person
{
public:
	Person(string name, int age)
	{
		m_Name = name;
		m_Age = age;
	}
	string m_Name;
	int m_Age;
};

class comparePerson
{
public:
	bool operator()(const Person& p1, const Person& p2)const
	{
		return p1.m_Age > p2.m_Age;
	}
};

//set��������
void test01()
{
	set<int> s1;
	s1.insert(10);
	s1.insert(40);
	s1.insert(50);
	s1.insert(20);
	s1.insert(30);

	for (set<int>::iterator it = s1.begin(); it != s1.end(); it++)
		cout << *it << " ";
	cout << endl;

	//ָ���������Ϊ�Ӵ�С
	set<int,myCompare> s2;
	s2.insert(10);
	s2.insert(40);
	s2.insert(50);
	s2.insert(20);
	s2.insert(30);

	for (set<int,myCompare>::iterator it = s2.begin(); it != s2.end(); it++)
		cout << *it << " ";
	cout << endl;
}

void test02()
{
	set<Person,comparePerson> s1;
	Person p1("����",28);
	Person p2("����",22);
	Person p3("�ŷ�",23);
	Person p4("����",24);

	s1.insert(p1);
	s1.insert(p2);
	s1.insert(p3);
	s1.insert(p4);

	for (set<Person,comparePerson>::iterator it = s1.begin(); it != s1.end(); it++)
		cout << "������" << it->m_Name << " ���䣺" << it->m_Age << endl;

}

int main()
{
	/*test01();*/
	test02();
	system("pause");
}