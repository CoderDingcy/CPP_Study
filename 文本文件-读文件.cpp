#include<iostream>
#include<fstream>
#include<string>
using namespace std;

void test01()
{
	ifstream ifs;
	ifs.open("test.txt",ios::in);
	if (!ifs.is_open())
	{
		cout << "�ļ���ʧ�ܣ�" << endl;
		return;
	}
	//������
	//��һ��
	/*char buf[10000] = { 0 };
	while (ifs >> buf)
	{
		cout << buf << endl;
	}*/

	//�ڶ���
	/*char buf[1024] = { 0 };
	while (ifs.getline(buf, sizeof(buf)))
		cout << buf << endl;*/

	//������
	/*string buf;
	while (getline(ifs, buf))
		cout << buf << endl;*/

	//������
	char c;
	while ((c = ifs.get()) != EOF)
		cout << c;
	ifs.close();
}
int main()
{
	test01();
	system("pause");
}