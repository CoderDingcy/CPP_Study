#include<iostream>
using namespace std;
#include<string>

/*
* `string& operator+=(const char* str);`                   //����+=������
* `string& operator+=(const char c);`                         //����+=������
* `string& operator+=(const string& str);`                //����+=������
* `string& append(const char *s); `                               //���ַ���s���ӵ���ǰ�ַ�����β
* `string& append(const char *s, int n);`                 //���ַ���s��ǰn���ַ����ӵ���ǰ�ַ�����β
* `string& append(const string &s);`                           //ͬoperator+=(const string& str)
* `string& append(const string &s, int pos, int n);`//�ַ���s�д�pos��ʼ��n���ַ����ӵ��ַ�����β ���ﾭ����֤�������ַ������ֽ�
*/

void test01()
{
	string str1;
	str1 = "��";
	str1 += "������Ϸ";
	str1 += ':';
	string str2 = "LOL DNF";
	str1 += str2;
	str1.append("��������");
	str1.append("game abcd", 5);
	string str5 = ",��Ҳû�뵽��";
	str1.append(str5);
	string str6;
	string str7 = "abcdef";
	str6.append(str1,0,2);
	cout << str1 << endl;
	cout << str6 << endl;
}

int main()
{
	test01();
	system("pause");
}