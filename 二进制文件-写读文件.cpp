#include<iostream>
#include<fstream>
using namespace std;
class person
{
public:
	char name[1024];
	int age;
};
//二进制文件-写文件
void test01()
{
	ofstream ofs;
	ofs.open("person.txt",ios::out|ios::binary);
	person p = {"张三",18};
	ofs.write((const char*)&p, sizeof(p));
	ofs.close();
}
//二进制文件-读文件
void test02()
{
	ifstream ifs;
	ifs.open("person.txt",ios::in|ios::binary);
	if (!ifs.is_open())
		cout << "打开文件失败!" << endl;
	person p;//数据读到person类对象中
	ifs.read((char*)&p,sizeof(p));
	cout << "姓名：" << p.name << " " << "年龄：" << p.age << endl;
	ifs.close();
}
int main()
{
	/*test01();*/
	test02();
	system("pause");
}