#include<iostream>
using namespace std;

class Base
{
public:
	Base()
	{
		cout << "Base类构造函数" << endl;
	}
	~Base()
	{
		cout << "Base类析构函数" << endl;
	}
};

class Son :public Base
{
public:
	Son()
	{
		cout << "Son类构造函数" << endl;
	}
	~Son()
	{
		cout << "Son类析构函数" << endl;
	}
};

void Test01()
{
	Son s;//先构造父类再构造子类 析构顺序相反
}
int main()
{
	Test01();
	system("pause");
}