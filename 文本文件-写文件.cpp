#include<iostream>
#include<fstream>
using namespace std;

void test01()
{
	ofstream ofs;
	ofs.open("test.txt", ios::out);
	ofs << "��������" << endl;
	ofs.close();
}
int main()
{
	test01();
	system("pause");
}