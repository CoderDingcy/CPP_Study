#include<iostream>
#include<string>
using namespace std;

//��ģ��
template<class NameType,class AgeType>
class Person
{
public:
	Person(NameType name,AgeType age)
	{
		m_Age = age;
		m_Name = name;
	}

	void Show()
	{
		cout << "���䣺" << m_Age << endl;
		cout << "������" << m_Name<< endl;
	}

	AgeType m_Age;
	NameType m_Name;
};

void test01()
{
	Person<string, int> p1("�����", 999);
	p1.Show();
}

int main()
{
	test01();
	system("pause");
}