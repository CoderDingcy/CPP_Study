#include<iostream>
#include<string>
using namespace std;

//��ģ��ķ��ļ���д���⼰���

//��һ�ַ���ֱ�Ӱ���Դ�ļ�#include"Person.cpp"
//��Ϊ��ģ��ĳ�Ա����ֻ�е���ʱ�Ż�ʵ�����а���Person.h�޷���֪���������������ʹ��������Ҳ�޷�ʹ�ú���
//�������Դ�ļ�����ֱ�ӿ�������ʵ�֣�����ͨ��Դ�ļ�������ͷ�ļ�Ҳ���Կ���ͷ�ļ�����Ϣ

//�ڶ��ַ��� ��.h��.cpp�ļ��е�����д��һ�𲢰��ļ�������Ϊ.hpp�ļ�
#include"Person.hpp"
//��һ�ַ��������ã�һ��ʹ�õڶ��ַ���

//template<class T1,class T2>
//class Person
//{
//public:
//	Person(T1 name, T2 age);
//	void Show();
//	T1 m_Name;
//	T2 m_Age;
//};

//template<class T1,class T2>
//Person<T1, T2>::Person(T1 name, T2 age)
//{
//	m_Name = name;
//	m_Age = age;
//}
//
//template<class T1, class T2>
//void Person<T1, T2>::Show()
//{
//	cout << "������" << m_Name << "   ���䣺" << m_Age << endl;
//}

void test01()
{
	Person<string, int> p("��˽�", 14);
	p.Show();
}
int main()
{
	test01();
	system("pause");
}