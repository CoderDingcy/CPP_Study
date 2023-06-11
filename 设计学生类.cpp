#include<iostream>
using namespace std;
# define PI 3.14

//class Circle
//{
//public:
//	double r;
//	double calZC()
//	{
//		return 2 * PI * r;
//	}
//
//
//};

class Student
{
public:
	string name;
	string id;
	void show()
	{
		cout << "姓名：" << name<<endl;
		cout << "学号：" << id << endl;
	}
};
int main()
{
	/*Circle c;
	c.r = 2.3;
	cout << c.calZC() << endl;*/
	Student s;
	s.name = "丁小文";
	s.id = "2018803229";
	s.show();
	system("pause");
}