#include<iostream>
using namespace std;

class Animal
{
public:
	int m_Age;
};
//������̳п��Խ�����μ̳е�����
//����virtual��Ϊ��̳�
//Animal���Ϊ�����
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
	//�������GrassSolidHorse��ֻ�ü̳�һ�ݾ��У����Ǵ���������̳��������������Դ�˷�
}
int main()
{
	test01();
	system("pause");
}