#include<iostream>
using namespace std;

class Animal
{
public:
	virtual void speak()
	{
		cout << "�����ڽл�" << endl;
	}
};

class Cat:public Animal
{
public:
	void speak()
	{
		cout << "Сè��������" << endl;
	}

};
//��ַ��� ����׶ξ��Ѿ�ȷ����ַ
//�����ִ��è˵�� ��ַ�Ͳ�����ǰ�� ��Ҫ�����н׶ν��а� ��ַ���
void dospeak(Animal& animal)
{
	animal.speak();
}

void test01()
{
	Cat c;
	dospeak(c);
}
int main()
{
	test01();
	system("pause");
}
//��̬��̬��������
//1���м̳й�ϵ
//2������Ҫ��д������麯��

//��̬��̬ʹ��
//�����ָ��������� ִ��������� 