#include<iostream>
#include<string>
using namespace std;
class Person
{
public:
	Person(string name,int age)
	{
		m_name = name;
		m_age = age;
	}
	//÷ÿ‘ÿ==
	bool operator==(Person& p)
	{
		if (m_age == p.m_age && m_name == p.m_name)
			return true;
		else
			return false;
	}
	string m_name;
	int m_age;
};

int main()
{
	Person p("Tom",18);
	Person p1("Tom", 18);
	if (p == p1)
		cout << "œ‡µ»" << endl;
	system("pause");
}