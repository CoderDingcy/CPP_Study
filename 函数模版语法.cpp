#include<iostream>
using namespace std;
//����ģ��

//�������ͽ�������
void swapInt(int& a, int& b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}
//���������ͽ�������
void swapDouble(double& a, double& b)
{
	double temp;
	temp = a;
	a = b;
	b = temp;
}
//����ģ��
template<typename T>//���߱���������һ��ģ�棬�����T��Ҫ����T��һ��ͨ�õ���������
void mySwap(T& a, T& b)
{
	T temp;
	temp=a;
	a = b;
	b = temp;
}

void test01()
{
	int a = 10;
	int b = 20;
	cout << "����ǰ��" << endl;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	//ʹ�ú���ģ��ȥ����
	//���ַ�ʽ
	//1���Զ������Ƶ�
	//mySwap(a, b);
	//2����ʾָ������
	mySwap<int>(a, b);
	cout << "������" << endl;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
}
int main()
{
	test01();
	system("pause");
}