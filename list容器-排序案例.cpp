#include<iostream>
#include<list>
using namespace std;
/*
������������Person�Զ����������ͽ�������Person�����������������䡢���
������򣺰�����������������������ͬ������߽��н���
*/
class Person
{
public:
	Person(int age,int height,string name)
	{
		m_Name = name;
		m_Age = age;
		m_Height = height;
	}
	string m_Name;
	int m_Age;
	int m_Height;
};

void myPrint(const list<Person>& l)
{
	for (list<Person>::const_iterator it = l.begin(); it != l.end(); it++)
		cout << "������" << it->m_Name << " ���䣺" << it->m_Age << " ��ߣ�" << it->m_Height << endl;

}
//ָ���������
bool myCompare(Person& p1,Person& p2)
{
	if (p1.m_Age == p2.m_Age)
		return p1.m_Height > p2.m_Height;
	else
		return p1.m_Age < p2.m_Age;
}

void test01()
{
	Person p1( 18, 178,"����");
	Person p2( 18, 128,"��һ");
	Person p3( 18, 158,"�Զ�");
	Person p4( 33, 198,"����");
	Person p5( 88, 128,"����");
	list<Person> l1;
	l1.push_back(p1);
	l1.push_back(p2);
	l1.push_back(p3);
	l1.push_back(p4);
	l1.push_back(p5);

	
	l1.sort(myCompare);

	myPrint(l1);

}

int main()
{
	test01();
	system("pause");
}