#include<iostream>
using namespace std;

//�ַ����Ĳ��Һ��滻

//1������
void test01()
{
	string str1 = "abcdefoiadsiasijdaoisdsiaosdkdef";
	
	//find
	int pos = str1.find("ef");
	if (pos == -1)
		cout << "δ�ҵ��ַ�����" << endl;
	else
	cout << "pos=" << pos << endl;

	//rfind
	//rfind��find������find�������Ҳ���   rfind�����������
	//find��rfind���᷵�������ҵ��ĵ�һ���ַ���λ��
	pos=str1.rfind("ef"); 
	cout << "pos=" << pos << endl;
}

//2���滻
void test02()
{
	string str1 = "adshsd";
	//��1��λ���������ַ����滻Ϊ�ַ�����1111��
	str1.replace(1, 3, "1111");
	cout << str1;
}
int main()
{
	test02();
	system("pause");
}