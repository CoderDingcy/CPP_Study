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
		cout << "������" << name<<endl;
		cout << "ѧ�ţ�" << id << endl;
	}
};
int main()
{
	/*Circle c;
	c.r = 2.3;
	cout << c.calZC() << endl;*/
	Student s;
	s.name = "��С��";
	s.id = "2018803229";
	s.show();
	system("pause");
}