#include<iostream>
#include<string>
using namespace std;


//��ģ���뺯��ģ�������

template<class NameType=string,class AgeType=int>
class Person
{
public:
	Person(NameType name, AgeType age)
	{
		m_Name = name;
		m_Age = age;
	}
	
	void Show()
	{
		cout << "���֣�" << m_Name<<endl;
		cout << "���䣺" << m_Age << endl;
	}

	AgeType m_Age;
	NameType m_Name;
};

//1����ģ��û���Զ������Ƶ���ʹ�÷�ʽ

void test01()
{
	//Person p1("�����", 999);//����������������֣���ģ�治���Զ��Ƶ����ͱ������ᱨ��
	Person<string, int> p1("�����", 999);
	p1.Show();
}

//2����ģ����ģ��Ĳ����б��п�����Ĭ�ϲ���

void test02()
{
	Person<> p2("��˽�", 1000);//��Ϊ�����Ѿ�����ģ������͸���ֵ�ˣ����п���ֱ��ʹ��
	p2.Show();
}

int main()
{
	test01();
	test02();
	system("pause");
}