#include<iostream>
using namespace std;
class Base
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;;
};
class Son1 :public Base
{
public:
	int m_D;
};
void test01()
{
	Son1 s;
	cout << sizeof(s)<<endl;//16
	                        //����̳��¸�������ԣ�����������������
}
int main()
{
	test01();
	system("pause");
}