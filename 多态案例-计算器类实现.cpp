#include<iostream>
#include<string>
using namespace std;
//��ͳ����ʵ�ּ�����
class Calculator
{
public:
	int num1;
	int num2;
	int getresult(string str)
	{
		if (str == "*")
			return num1 * num2;
		else if (str == "+")
			return num1 + num2;
		else if (str == "-")
			return num1 - num2;
		else
			return num1 / num2;
	}
};

void test01()
{
	Calculator c1;
	c1.num1 = 10;
	c1.num2 = 10;
	cout << c1.getresult("+") << endl;
}

//���ö�̬ʵ�ּ�����
//��̬�ô�
//1����֯�ṹ����
//2���ɶ���ǿ
//3������ǰ�ںͺ�����չ�Լ�ά���Ը�

class AbstractCalculator
{
public:
	virtual int getresult()
	{
		return 0;
	}
	int num1;
	int num2;
};

class AddCalculator:public AbstractCalculator
{
public:
	int getresult()
	{
		return num1 + num2;
	}
};

class SubCalculator :public AbstractCalculator
{
public:
	int getresult()
	{
		return num1 - num2;
	}
};

class MulCalculator :public AbstractCalculator
{
public:
	int getresult()
	{
		return num1 * num2;
	}
};

void test02()
{
	AbstractCalculator* a = new AddCalculator;
	a->num1 = 100;
	a->num2 = 200;
	cout << a->getresult() << endl;
	delete a;
}
int main()
{
	/*test01();*/
	test02();

	system("pause");
}