//ʵ��ͨ��������


#include"myArray.hpp"
#include<string>
//�����Զ�����������
class Person
{
public:
	Person()//
	{

	}
	Person(string name, int age)
	{
		this->age = age;
		this->name = name;
	}
	string name;
	int age;
};
void test01()
{
	myArray<Person> arr3(7);
	Person p1("����", 19);
	Person p2("����l", 29);
	Person p3("������", 39);
	Person p4("���Ƹ�", 9);
	Person p5("���Ʒ���", 59);
	Person p6("������", 89);
	Person p7("���Ƶ���", 99);
	arr3.Tail_Insert(p1);
	arr3.Tail_Insert(p2);
	arr3.Tail_Insert(p3);
	arr3.Tail_Insert(p4);
	arr3.Tail_Insert(p5);
	arr3.Tail_Insert(p6);
	arr3.Tail_Insert(p7);
	cout << arr3[3].name<<endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}