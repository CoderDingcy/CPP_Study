//实现通用数组类


#include"myArray.hpp"
#include<string>
//测试自定义数据类型
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
	Person p1("赵云", 19);
	Person p2("赵云l", 29);
	Person p3("赵云了", 39);
	Person p4("赵云个", 9);
	Person p5("赵云发的", 59);
	Person p6("赵云我", 89);
	Person p7("赵云但是", 99);
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