#include<iostream>
using namespace std;
//����ģ��ע������

template<class T>//typename�����滻��class ���ۺ���ģ�滹����ģ����class������
void mySwap(T& a, T& b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}

//1���Զ������Ƶ������Ƶ���һ�µ���������T�ſ���ʹ��

void test01()
{
	int a = 10;
	int b = 20;
	char c = 'e';
	//mySwap(a, b);//��ȷ��
	//mySwap(a, c);//�����Ƶ������Ͳ�һ��
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
}

//2��ģ�����ȷ����T���������ͣ��ſ���ʹ��
template<class T>
void func()
{
	cout << "func��������" << endl;
}

void test02()
{
	func<int>(); //��ȷ���������޷�����ģ��ģ���������Ϊģ�汾��û���漰�����͵����޷��Զ��Ƶ�������
}

int main()
{
	//test01();
	test02();
	system("pause");
}