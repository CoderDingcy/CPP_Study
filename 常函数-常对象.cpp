#include<iostream>
using namespace std;
class Person
{
public:
	void Showage()const//常函数 加的const是用来修饰this指针
	{
		this->b = 100;
		//age=100; == this->age=100;
		//this是指针常量，要是常函数内不可修改成员属性的值，就要使this指针不仅不可修改指向并且不能指向的值
	}
	void test()
	{

	}
	 
	int age;
		mutable int b;//加上mutable 在常函数中也可以修改成员属性的值
};
int main()
{
	const Person p;
	p.b = 1000;//只要加上mutable，不管常函数还是常对象都可以修改
	//p.age = 1001;//不可修改,常对象不允许修改普通的成员属性
	//常对象只能调用常函数
	p.Showage();
	//p.test();不能调用
	system("pause");
}