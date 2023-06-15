#include<iostream>
using namespace std;
//赋值运算符的重载
class Person
{
public:
	Person(int age)
	{
		m_age = new int(age);
	}
	Person& operator=(Person &p)//这里要加上引用，防止调用默认拷贝构造函数
	{
		if (m_age != NULL)
		{
			delete m_age;
			m_age = NULL;
		}
		m_age = new int(*p.m_age);
		return *this;
	}
	~Person()
	{
		if (m_age != NULL)
		{
			delete m_age;
			m_age = NULL;
		}
	}
	int* m_age;
};

int main()
{
	Person p1(10);
	Person p2(20);
	Person p3(30);
	p1 = p2 = p3;
	cout << *p1.m_age << endl;
	cout << *p2.m_age << endl;
	cout << *p3.m_age << endl;
	system("pause");
}