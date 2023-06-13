#include<iostream>
#include<string>
using namespace std;
//结论，当一个类作为另一个类的成员时，初始化时会先调用它的构造函数，然而析构函数的顺序相反
class Phone
{
public:
	Phone(string name)
	{
		Phone_name = name;
		cout << "Phone构造函数调用" << endl;
	}
	~Phone()
	{
		cout << "Phone类析构函数的调用" << endl;
	}
	string Phone_name;
};
class Man
{
public:
	Man(string Mname,string Pname): name(Mname), p(Pname)
	{
		cout << "Man构造函数调用" << endl;
	}
	~Man()
	{
		cout << "Man类析构函数的调用" << endl;
	}
	string name;
	Phone p;
};
void test01()
{
	Man m("王琰", "苹果");
	cout << m.name << "拿着" << m.p.Phone_name << "装逼" << endl;
}
int main()
{
	test01();
	system("pause");
}