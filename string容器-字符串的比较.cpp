#include<iostream>
using namespace std;
#include<string>

//�ַ����Ƚ�
//ʹ��ASCII��ֵ���бȽϣ�
//�����ȷ���0 ���ڷ���1 С�ڷ���-1
void test01()
{
	string str1 = "hello";
	string str2 = "hello";
	if (str1.compare(str2) == 0)
		cout << "���ַ�����ȣ�" << endl;
	else
		cout << "���ַ�������ȣ�" << endl;
}
int main()
{
	test01();
	system("pause");
}