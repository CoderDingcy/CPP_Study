#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

//���ò����㷨
//find

//����������������
void test01()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
		v.push_back(i);
	vector<int>::iterator pos = find(v.begin(), v.end(), 50);
	if (pos == v.end())
		cout << "û���ҵ�" << endl;
	else
	{
		cout << "�ҵ���" << endl;
		cout << "���Ԫ��ֵΪ"<< * pos << endl;
	}
}

//�����Զ������������
class Person
{
public:
	Person(string name, int age)
	{
		m_Age = age;
		m_Name = name;
	}

	//����== �õײ��find�㷨֪������ô�Ա�
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
	Person p1("�ŷ�", 16);
	Person p2("��·", 26);
	Person p3("����", 36);
	Person p4("����", 46);

	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);

	vector<Person>::iterator pos = find(v.begin(), v.end(), p2);
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
	//test01();
	test02();
	system("pause");
}