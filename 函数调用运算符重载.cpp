#include<iostream>
#include<string>
using namespace std;
class Myprint
{
public:
	void operator()(string test)//�����������������
	{
		cout << test << endl;
	}
};

void print(string name)
{
	cout << name << endl;
}
//�º����ǳ����
class jai
{
public:
	int operator()(int a, int b)
	{
		return a + b;
	}
};
int main()
{
	jai j;
	cout << j(1, 2) << endl;
	cout << jai()(2, 2) << endl;//������������������΢��ϰһ��
	Myprint p;
	p("ni");//��Ϊ�ͺ������÷ǳ����ƣ���˱���Ϊ�º���
	print("niwo");
	system("pause");
}