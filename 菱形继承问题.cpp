#include<iostream>
using namespace std;

class Animal
{
public:
	int m_Age;
};
//利用虚继承可以解决菱形继承的问题
//加上virtual变为虚继承
//Animal类称为虚基类
class Sheep:virtual public Animal
{
};
class Horse :virtual public Animal
{
};
class GrassSolidHorse:public Sheep,public Horse
{
};
void test01()
{
	GrassSolidHorse s;
	s.Sheep::m_Age = 100;
	s.Horse::m_Age = 200;
	cout << "Sheep::m_Age = " << s.Sheep::m_Age;
	cout << "Horse::m_Age = " << s.Horse::m_Age;
	cout << "s.m_Age = " << s.m_Age;
	//这份数据GrassSolidHorse类只用继承一份就行，但是从两个父类继承了两份造成了资源浪费
}
int main()
{
	test01();
	system("pause");
}