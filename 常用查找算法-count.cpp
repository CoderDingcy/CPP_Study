#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

//���ò����㷨 count

//ͳ��������������
void test01()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(10);
	v.push_back(10);
	v.push_back(10);
	v.push_back(10);
	v.push_back(10);

	int num=count(v.begin(), v.end(),10);

	cout << "Ԫ��10�������еĸ���ͳ��Ϊ" << num << "��" << endl;
}

//ͳ���Զ�����������
class Person
{
public:
	Person(string name,int age) 
	{
		m_Age = age;
		m_Name = name;
	}

	bool operator==(const Person& p)
	{
		return p.m_Age==m_Age;
	}
	string m_Name;
	int m_Age;

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

	Person p("�ܲ�",24);

	//��ܲ�ͬ��������
	int num = count(v.begin(), v.end(), Person(p));
	cout << "��ܲ�ͬ�����" << num << "��" << endl;
}
int main()
{
	//test01();
	test02();
	system("pause");
}