#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

//���ò����㷨 find_if

//������������
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
		cout << "û���ҵ�" << endl;
	else
	{
		cout << "�ҵ���" << endl;
		cout << *pos << endl;
	}
}

//�Զ�����������
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
	Person p1("����", 12);
	Person p2("����", 17);
	Person p3("�ŷ�", 27);
	Person p4("�����", 14);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);

	//��һ���������23�ĳ�Ա
	vector<Person>::iterator pos = find_if(v.begin(), v.end(), Greater20());
	if (pos == v.end())
		cout << "û���ҵ�" << endl;
	else
	{
		cout << "�ҵ���" << endl;
		cout << "������" << pos->m_Name << " ���䣺" << pos->m_Age << endl;
	}
}

int main()
{
	test01();
	test02();
	system("pause");
}