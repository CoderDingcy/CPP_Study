#include<iostream>
using namespace std;

//��ģ���г�Ա��������ʱ��
//��ģ���г�Ա�����ڵ���ʱ�ű�����

class Person1
{
public:
	void ShowPerson1()
	{
		cout << "Person1 Show" << endl;
	}
};

class Person2
{
public:
	void ShowPerson2()
	{
		cout << "Person2 Show" << endl;
	}
};

template<class T>
class Person
{
public:
	T obj;
	//���������������ᱨ����Ϊ��ģ��ĳ�Ա����ֻ�е���ʱ�Żᱻ����
	void func1()
	{
		obj.ShowPerson1();
	}

	void func2()
	{
		obj.ShowPerson2();
	}
};

void test01()
{
	Person<Person1> p1;
	p1.func1();
	Person<Person2> p2;
	p2.func2();
}

int main()
{
	test01();
	system("pause");
}