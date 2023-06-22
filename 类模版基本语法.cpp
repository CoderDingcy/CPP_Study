#include<iostream>
#include<string>
using namespace std;

//类模版
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
		cout << "年龄：" << m_Age << endl;
		cout << "姓名：" << m_Name<< endl;
	}

	AgeType m_Age;
	NameType m_Name;
};

void test01()
{
	Person<string, int> p1("孙悟空", 999);
	p1.Show();
}

int main()
{
	test01();
	system("pause");
}