#include<iostream>
using namespace std;
//函数模版注意事项

template<class T>//typename可以替换成class 无论函数模版还是类模版用class都可以
void mySwap(T& a, T& b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}

//1、自动类型推导必须推导出一致的数据类型T才可以使用

void test01()
{
	int a = 10;
	int b = 20;
	char c = 'e';
	//mySwap(a, b);//正确！
	//mySwap(a, c);//错误！推导出类型不一致
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
}

//2、模版必须确定出T的数据类型，才可以使用
template<class T>
void func()
{
	cout << "func函数调用" << endl;
}

void test02()
{
	func<int>(); //不确定类型是无法调用模版的，这里是因为模版本身没有涉及到类型导致无法自动推导出类型
}

int main()
{
	//test01();
	test02();
	system("pause");
}