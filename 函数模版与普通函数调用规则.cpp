#include<iostream>
using namespace std;

//��ͨ�����뺯��ģ����ù���
//1�������ͨ�����ͺ���ģ�涼���Ե��ã����ȵ�����ͨ����
// �ڵ�һ������£���ʹ����û��ʵ�֣�ֻ������������Ҳֻ�ᱨ����������ú���ģ��
//2������ͨ����ģ������б�ǿ�Ƶ��ú���ģ�� 
//3������ģ��Ҳ���Է�����������
//4���������ģ����Բ������õ�ƥ�䣬���ȵ��ú���ģ��

void myPrint(int a, int b)
{
	cout << "������ͨ����" << endl;
}

template<class T>
void myPrint(T a, T b)
{
	cout << "����ģ��" << endl;
}

template<class T>
void myPrint(T a, T b,T c)
{
	cout << "����ģ������" << endl;
}

void test01()
{
	int a = 10;
	int b = 10;
	int c = 10;

	//���ȵ�����ͨ����
	myPrint(a,b);

	//ͨ����ģ��Ĳ����б�ȥ���ú���ģ��  ǿ�Ƶ���ģ���һ�ַ�ʽ
	myPrint<>(a, b);

	//ģ�������
	myPrint(a, b, c);

	//ѡ����ѵķ�ʽ����
	//�������ģ�棬��Ϊ������ú�����Ҫ������ʽת��
	myPrint(2.0, 1.0);
}

int main()
{
	test01();
	system("pause");
}