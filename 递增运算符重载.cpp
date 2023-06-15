#include<iostream>
using namespace std;
class MyInteger
{
	friend ostream& operator<<(ostream& cout, MyInteger myint);
public:
	MyInteger()
	{
		m_num = 0;
	}
	//重载前置递增 ++
	MyInteger& operator++()//返回引用的目的是对一个数据进行操作
	{
		m_num++;
		return *this;
	}
	//重载后置递增
	MyInteger operator++(int)//占位参数用来区分前置和后置,这里不能返回引用，因为记录的是局部变量，函数执行完就会释放空间
	{
		//1、记录当时结果
		MyInteger myint = *this;
		//2、递增
		m_num++;
		//3、返回当时结果
		return myint;
	 }
private:
	int m_num;
};
//重载左移运算符
ostream& operator<<(ostream& cout, MyInteger myint)
{
	cout << myint.m_num;
	return cout;
}
void test01()
{
	MyInteger myint;
	cout << ++(++myint) << endl;
	cout << ++myint << endl;
}

void test02()
{
	MyInteger myint;
	cout << myint++ << endl;
	cout << myint << endl;
}
int main()
{
	/*test01();*/
	test02();
	system("pause");
}