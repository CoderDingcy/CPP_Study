#include<iostream>
using namespace std;
//函数模版

//两个整型交换函数
void swapInt(int& a, int& b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}
//两个浮点型交换函数
void swapDouble(double& a, double& b)
{
	double temp;
	temp = a;
	a = b;
	b = temp;
}
//函数模版
template<typename T>//告诉编译器声明一个模版，后面的T不要报错，T是一个通用的数据类型
void mySwap(T& a, T& b)
{
	T temp;
	temp=a;
	a = b;
	b = temp;
}

void test01()
{
	int a = 10;
	int b = 20;
	cout << "交换前：" << endl;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	//使用函数模版去交换
	//两种方式
	//1、自动类型推导
	//mySwap(a, b);
	//2、显示指定类型
	mySwap<int>(a, b);
	cout << "交换后：" << endl;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
}
int main()
{
	test01();
	system("pause");
}