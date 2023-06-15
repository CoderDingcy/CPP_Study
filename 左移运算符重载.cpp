#include<iostream>
using namespace std;
//左移运算符重载
class Person
{
	friend ostream& operator<<(ostream& cout, Person p);
	//通常不会使用成员函数来重载左移运算符<<，因为无法实现cout在左侧
public:
	Person(int a, int b)
	{
		m_A = a;
		m_B = b;
	}
private:
	int m_A;
	int m_B;
};

//只能利用全局函数来重载左移运算符
ostream& operator<<(ostream& cout, Person p)
{
	cout << "m_A=" << p.m_A << "  m_B=" << p.m_B;
	return cout;//cout只能有一个
}
void test01()
{
	Person p(10,10);
	
	cout << p << endl;
}
int main() 
{
	test01();
	system("pause");
}