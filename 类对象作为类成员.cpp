#include<iostream>
#include<string>
using namespace std;
//���ۣ���һ������Ϊ��һ����ĳ�Աʱ����ʼ��ʱ���ȵ������Ĺ��캯����Ȼ������������˳���෴
class Phone
{
public:
	Phone(string name)
	{
		Phone_name = name;
		cout << "Phone���캯������" << endl;
	}
	~Phone()
	{
		cout << "Phone�����������ĵ���" << endl;
	}
	string Phone_name;
};
class Man
{
public:
	Man(string Mname,string Pname): name(Mname), p(Pname)
	{
		cout << "Man���캯������" << endl;
	}
	~Man()
	{
		cout << "Man�����������ĵ���" << endl;
	}
	string name;
	Phone p;
};
void test01()
{
	Man m("����", "ƻ��");
	cout << m.name << "����" << m.p.Phone_name << "װ��" << endl;
}
int main()
{
	test01();
	system("pause");
}