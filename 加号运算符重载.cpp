#include<iostream>
using namespace std;
//加号运算符重载
class Person
{
public:
	//成员函数重载
	/*Person operator+(Person p)
	{
		Person tmp;
		tmp.m_A = this->m_A + p.m_A;
		tmp.m_B = this->m_B + p.m_B;
		return tmp;
	}*/
	int m_A;
	int m_B;
};
//全局函数重载
Person operator+(Person p1, Person p2)
{
	Person tmp;
	tmp.m_A = p1.m_A + p2.m_A;
	tmp.m_B = p1.m_B + p2.m_B;
	return tmp;
}
Person operator+(Person p1, int  p2)
{
	Person tmp;
	tmp.m_A = p1.m_A + p2;
	tmp.m_B = p1.m_B + p2;
	return tmp;
}
void test01()
{
	Person p1;
	p1.m_A = 10;
	p1.m_B = 10;
	Person p2;
	p2.m_A = 10;
	p2.m_B = 10;
	Person p3 = p1 + p2;
	//成员函数重载调用本质 p3=p1.operator+(p2);
	//全局函数重载调用本质 p3=operator+(p1,p2);
	
	//运算符重载也可以发生函数重载
	Person p4 = p1 + 10;
	cout << "p3.m_A=" << p3.m_A << endl;
	cout << "p4.m_A=" << p4.m_A << endl;
	cout << "p4.m_A=" << p4.m_B << endl;
}


int main()
{
	test01();
	system("pause");
}