#include<iostream>
#include<string>
using namespace std;

//ģ�������
//ģ�岢�������ܵģ���Щ�ض����������ͣ���Ҫ�þ��廯��ʽ������ʵ��

class Person
{
public:
	Person(string name, int age)
	{
		m_Name = name;
		m_Age = age;
	}
	int m_Age;
	string m_Name;
};

//�Ա�ģ��
template<class T>
bool my_Compare(T& a, T& b)
{
	if (a==b)
		return true;
	else
		return false;
}

//�ṩһ�������Person�İ汾
//ģ�������
template<> bool my_Compare(Person& p1, Person& p2)
{
	if (p1.m_Name == p2.m_Name && p2.m_Age == p1.m_Age)
		return true;
	else
		return false;
}

void test01()
{
	int a = 10;
	int b = 20;

	bool ret = my_Compare(a, b);
	if (ret)
		cout << "a=b" << endl;
	else
		cout << "a!=b" << endl;
}

void test02()
{
	Person p1("Tom", 10);
	Person p2("Tom", 10);
	bool ret = my_Compare(p1, p2);
	if (ret)
		cout << "p1��p2���" << endl;
	else
		cout << "p1��p2�����" << endl;
}

int main()
{
	test01();
	test02();
	system("pause");
}