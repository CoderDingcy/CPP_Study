#include<iostream>
#include<fstream>
using namespace std;
class person
{
public:
	char name[1024];
	int age;
};
//�������ļ�-д�ļ�
void test01()
{
	ofstream ofs;
	ofs.open("person.txt",ios::out|ios::binary);
	person p = {"����",18};
	ofs.write((const char*)&p, sizeof(p));
	ofs.close();
}
//�������ļ�-���ļ�
void test02()
{
	ifstream ifs;
	ifs.open("person.txt",ios::in|ios::binary);
	if (!ifs.is_open())
		cout << "���ļ�ʧ��!" << endl;
	person p;//���ݶ���person�������
	ifs.read((char*)&p,sizeof(p));
	cout << "������" << p.name << " " << "���䣺" << p.age << endl;
	ifs.close();
}
int main()
{
	/*test01();*/
	test02();
	system("pause");
}