#include<iostream>
using namespace std;

//��ͨ�����뺯��ģ�������

//1����ͨ�������ÿ��Է�����ʽ����ת��
//2������ģ���Զ��Ƶ����ܷ�����ʽת��
//3������ģ��ָ�����Ϳ��Է�����ʽ����ת��

//��ͨ����
int add01(int a, int b)
{
	return a + b;
}

//����ģ��
template<class T>
T add02(T a, T b)
{
	return a + b;
}

void test01()
{
	int a = 10;
	int b = 20;
	char c = 'g';
	cout << add01(a, c) << endl;//��ͨ������ʽ����ת��
	//cout << add02(a, c) << endl;//����ģ����ʽ����ת���ᱨ�� �Զ��Ƶ������Խ�����ʽ�����Ƶ�

	//��ʽָ������
	cout << add02<int>(a, c) << endl;
}

int main()
{
	test01();
	system("pause");
}
//�ܽ᣺����ʹ��ָ�����͵ķ�ʽ��ʹ�ú���ģ�棬��Ϊ�����Լ�ȷ������T