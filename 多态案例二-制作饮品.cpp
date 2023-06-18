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
		cout << "加热农夫山泉" << endl;
	}
	void brew()
	{
		cout << "冲泡咖啡" << endl;
	}
	void pourincup()
	{
		cout << "倒入高级茶杯(琴吹紬提供)" << endl;
	}
	void putsomething()
	{
		cout << "加入牛奶" << endl;
	}
};

class Tea :public AbstractDrinking
{
public:
	void boil()
	{
		cout << "加热口水" << endl;
	}
	void brew()
	{
		cout << "冲泡茶叶" << endl;
	}
	void pourincup()
	{
		cout << "倒入高级茶杯(琴吹紬提供)" << endl;
	}
	void putsomething()
	{
		cout << "加入腌萝卜" << endl;
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