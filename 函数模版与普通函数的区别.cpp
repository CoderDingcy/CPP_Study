#include<iostream>
using namespace std;

//普通函数与函数模版的区别

//1、普通函数调用可以发生隐式类型转换
//2、函数模版自动推导不能发生隐式转换
//3、函数模版指定类型可以发生隐式类型转换

//普通函数
int add01(int a, int b)
{
	return a + b;
}

//函数模版
template<class T>
T add02(T a, T b)
{
	return a + b;
}

void test01()
{
	int a = 10;
	int b = 20;
	char c = 'g';
	cout << add01(a, c) << endl;//普通函数隐式类型转换
	//cout << add02(a, c) << endl;//函数模版隐式类型转换会报错 自动推导不可以进行隐式类型推导

	//显式指定类型
	cout << add02<int>(a, c) << endl;
}

int main()
{
	test01();
	system("pause");
}
//总结：建议使用指定类型的方式来使用函数模版，因为可以自己确定类型T