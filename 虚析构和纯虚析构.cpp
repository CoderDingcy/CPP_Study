#include<iostream>
#include<string>
using namespace std;

class Animal
{
public:
	Animal()
	{
		cout << "Animal���캯������" << endl;
	}
	virtual void speak() = 0;
	//virtual ~Animal()//����������Կռ��ͷŲ��ɾ�������
	//{
	//	cout << "Animal������������" << endl;
	//}
	//����������������ֻ����һ��
	virtual ~Animal() = 0;//����������Ҫ����������ʵ�� ���˴������������Ҳ���ڳ������޷�ʵ����
};
Animal::~Animal()
{
	cout << "Animal��Ĵ���������������" << endl;
}
class Cat :public Animal
{
public:
	Cat(string name)
	{
		cout << "Cat���캯������" << endl;
		m_Name =new string(name);
	}
	void speak()
	{
		cout << *m_Name << "Сè��˵��" << endl;
	}
	~Cat()
	{
		cout << "Cat������������" << endl;
		if (m_Name != NULL)
		{
			delete m_Name;
			m_Name = NULL;
		}
	}  
	string* m_Name;
};

void test01()
{
	Animal* a = new Cat("Tom");
	a->speak();
	delete a;//����ָ��������ʱ�򲻻����������������� ������������ж������Ի�����ڴ�й©
	//�����������������Ϊ�������ͻ���������������
}
int main()
{
	test01();
	system("pause");
}