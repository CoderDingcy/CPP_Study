#include<iostream>
using namespace std;

//普通函数与函数模版调用规则
//1、如果普通函数和函数模版都可以调用，优先调用普通函数
// 在第一种情况下，即使函数没有实现，只有声明，程序也只会报错，并不会调用函数模版
//2、可以通过空模版参数列表，强制调用函数模版 
//3、函数模版也可以发生函数重载
//4、如果函数模版可以产生更好的匹配，优先调用函数模版

void myPrint(int a, int b)
{
	cout << "调用普通函数" << endl;
}

template<class T>
void myPrint(T a, T b)
{
	cout << "调用模版" << endl;
}

template<class T>
void myPrint(T a, T b,T c)
{
	cout << "调用模版重载" << endl;
}

void test01()
{
	int a = 10;
	int b = 10;
	int c = 10;

	//优先调用普通函数
	myPrint(a,b);

	//通过空模版的参数列表去调用函数模版  强制调用模版的一种方式
	myPrint<>(a, b);

	//模版可重载
	myPrint(a, b, c);

	//选择更佳的方式调用
	//这里调用模版，因为如果调用函数还要进行隐式转换
	myPrint(2.0, 1.0);
}

int main()
{
	test01();
	system("pause");
}