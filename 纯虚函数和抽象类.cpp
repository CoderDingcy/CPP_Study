#include<iostream>
using namespace std;

class Base
{
public:
	//���麯��
	//ֻҪ��һ�����麯���������Ϊ������
	//�������ص㣺
	//1���޷�ʵ��������
	//2���������е����࣬����Ҫ��д�����еĴ��麯��������ҲΪ������
	virtual void func() = 0;
};

class Son :public Base
{
public:
	void func()
	{
		cout << "��д���麯��" << endl;
	}
};

void test01()
{
	Base* base = new Son;
	base->func();
}
int main()
{
	test01();
	system("pause");
}