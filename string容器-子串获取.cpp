#include<iostream>
#include<string>
using namespace std;

//string���Ӵ�

void test01()
{
	string str = "abcde";
	string strSub = str.substr(1, 2);
	cout << strSub<<endl;
}

//ʵ�ð���
void test02()
{
	string email = "2284858868@qq.com";

	//���ʼ���ַ�л�ȡ�û�����Ϣ
	//��ȡQQ��
	//������@����

	int pos = email.find('@');
	string str = email.substr(0, pos);//��������ʼ��λ�ã��ض��ٸ��ַ���
	cout << str<<endl;
}

int main()
{
	/*test01();*/
	test02();
	system("pause");
}