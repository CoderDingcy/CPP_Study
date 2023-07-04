#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

//���ò����㷨 count_if

//ͳ��������������
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

	cout << "����10��Ԫ���������еĸ���ͳ��Ϊ" << num << "��" << endl;
}

//ͳ���Զ�����������
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
	//ͳ���������20��Ԫ�ظ���
	bool operator()(const Person& p)
	{
		return p.m_Age > 20;
	}
};

void test02()
{
	Person p1("����", 34);
	Person p2("����", 24);
	Person p3("�ŷ�", 54);
	Person p4("����", 64);
	Person p5("�����", 14);

	vector<Person> v;
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);
	v.push_back(p5);


	int num = count_if(v.begin(), v.end(),Greater20());
	cout << "�������20������Ϊ" << num << "��" << endl;
}
int main()
{
	//test01();
	test02();
	system("pause");
}