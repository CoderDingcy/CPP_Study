#include<iostream>
using namespace std;

template<class T>
class Base
{
	T m_Num;
};

//class Son :public Base//如此写法是错误的因为T不确定类型，继承过来无法分配空间

class Son :public Base<int>
{

};

void test01()
{
	Son s1;
}

//如果想灵活指定父类中的T类型，子类也需要变类模版
template<class T1,class T2>
class Son1:public Base<T1> 
{
public:
	Son1()
	{
		cout << "数据类型为：" << typeid(obj).name() << endl;
	}
	T2 obj;
};

void test02()
{
	Son1<int, int> s2;
}

int main()
{
	test02();	
	system("pause");
}