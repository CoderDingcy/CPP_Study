#include<iostream>
using namespace std;

class AbstractDrinking
{
public:
	virtual void boil() = 0;
	virtual void brew() = 0;
	virtual void pourincup() = 0;
	virtual void putsomething() = 0;
	void makedrink()
	{
		boil();
		brew();
		pourincup();
		putsomething();
	}
};

class Coffee :public AbstractDrinking
{
public:
	void boil()
	{
		cout << "����ũ��ɽȪ" << endl;
	}
	void brew()
	{
		cout << "���ݿ���" << endl;
	}
	void pourincup()
	{
		cout << "����߼��豭(�ٴ����ṩ)" << endl;
	}
	void putsomething()
	{
		cout << "����ţ��" << endl;
	}
};

class Tea :public AbstractDrinking
{
public:
	void boil()
	{
		cout << "���ȿ�ˮ" << endl;
	}
	void brew()
	{
		cout << "���ݲ�Ҷ" << endl;
	}
	void pourincup()
	{
		cout << "����߼��豭(�ٴ����ṩ)" << endl;
	}
	void putsomething()
	{
		cout << "�������ܲ�" << endl;
	}
};

void makeD(AbstractDrinking& abc)
{
	abc.makedrink();
}

void test01()
{
	Coffee c;
	makeD(c);
	cout << endl;
	Tea t;
	makeD(t);
}
int main()
{
	test01();
	system("pause");
}