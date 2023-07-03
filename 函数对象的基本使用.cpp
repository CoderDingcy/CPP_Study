#include<iostream>
#include<string>
using namespace std;
//函数对象 （仿函数）
/*
* 函数对象在使用时，可以像普通函数那样调用, 可以有参数，可以有返回值
* 函数对象超出普通函数的概念，函数对象可以有自己的状态
* 函数对象可以作为参数传递
*/

class MyAdd
{
public:
	int operator()(int v1, int v2)
	{
		return v1 + v2;
	}
};

//1、函数对象在使用时，可以像普通函数那样调用, 可以有参数，可以有返回值
void test01()
{
	MyAdd add;
	cout<<add(1, 2)<<endl;
}

//2、函数对象超出普通函数的概念，函数对象可以有自己的状态
class MyPrint
{
public:
	MyPrint()
	{
		count = 0;
	}
	void operator()(string test)
	{
		cout << test << endl;
		count++;
	}
	int count;//内部自己的状态
};

void test02()
{
	MyPrint myprint;
	myprint("hello world");
	myprint("hello world");
	myprint("hello world");
	myprint("hello world");
	myprint("hello world");
	cout << "myprint调用次数为" << myprint.count << endl;
}

//3、函数对象可以作为参数传递
void doPrint(MyPrint& mp, string test)
{
	mp(test);
}

void test03()
{
	MyPrint myprint;
	doPrint(myprint, "wjjj");
}
int main()
{
	//test01();
	//test02();
	test03();
	system("pause");
}