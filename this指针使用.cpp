//在C++, 当函数返回值的类型是非引用类型时，会返回对象的副本。这是因为C++中的函数调用默认采用值传递的方式。
#include<iostream>
using namespace std;
class Person {
public:
	Person(int age)
	{//1.形参与成员变量同名，this指针可以用来区分
		this->age = age;
	}

	Person& PersonAdd(Person p)
	{
		this->age += p.age;
		return *this;//2.返回对象本身,不以引用方式返回，则返回的只是副本
	}
	int age;
};


int main()
{
	Person p(10);
	Person p1(10);
	cout<< p1.PersonAdd(p).PersonAdd(p).PersonAdd(p).age;
	system("pause");
}