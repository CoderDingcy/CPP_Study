#include<iostream>
using namespace std;
#include<string>
//string�Ĺ��캯��

//string();          			   //����һ���յ��ַ��� ����: string str;
//string(const char* s); 	       //ʹ���ַ���s��ʼ��
//string(const string& str);       //ʹ��һ��string�����ʼ����һ��string����
//string(int n, char c);           //ʹ��n���ַ�c��ʼ�� 

void test01()
{
	string s1;//Ĭ�Ϲ���

	const char* str = "Hello_World";
	string s2(str);
	cout << "str=" << s2 << endl;

	string s3(s2);
	cout << "s3=" << s3 << endl;	
	
	string s4(2,'a');
	cout << "s4=" << s4 << endl;


}

int main()
{
	test01();
	system("pause");
}