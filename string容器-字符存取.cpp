#include<iostream>
using namespace std;
#include<string>

//�ַ���ȡ
void test01()
{
	string str1 = "Hello_World";
	//1��ͨ��[]��ʽ�����е����ַ��Ĵ�ȡ
		for (int i = 0; i < str1.size(); i++)
		{
			cout<<str1[i]<<" ";
	}
		cout << endl;
	//2��ͨ��at��ʽ�����е����ַ��Ĵ�ȡ
		for (int i = 0; i < str1.size(); i++)
		{
			cout << str1.at(i) << " ";
		}
		cout << endl;

		//�޸ĵ����ַ�
		str1[0] = 'x';
		str1.at(1) = 'x';
		cout << str1 << endl;
}
int main()
{
	test01();
	system("pause");
}