//��C++, ����������ֵ�������Ƿ���������ʱ���᷵�ض���ĸ�����������ΪC++�еĺ�������Ĭ�ϲ���ֵ���ݵķ�ʽ��
#include<iostream>
using namespace std;
class Person {
public:
	Person(int age)
	{//1.�β����Ա����ͬ����thisָ�������������
		this->age = age;
	}

	Person& PersonAdd(Person p)
	{
		this->age += p.age;
		return *this;//2.���ض�����,�������÷�ʽ���أ��򷵻ص�ֻ�Ǹ���
	}
	int age;
};


int main()
{
	Person p(10);
	Person p1(10);
	cout<< p1.PersonAdd(p).PersonAdd(p).PersonAdd(p).age;
	system("pause");
}