#include<iostream>
#include<list>
using namespace std;
/*
案例描述：将Person自定义数据类型进行排序，Person中属性有姓名、年龄、身高
排序规则：按照年龄进行升序，如果年龄相同按照身高进行降序
*/
class Person
{
public:
	Person(int age,int height,string name)
	{
		m_Name = name;
		m_Age = age;
		m_Height = height;
	}
	string m_Name;
	int m_Age;
	int m_Height;
};

void myPrint(const list<Person>& l)
{
	for (list<Person>::const_iterator it = l.begin(); it != l.end(); it++)
		cout << "姓名：" << it->m_Name << " 年龄：" << it->m_Age << " 身高：" << it->m_Height << endl;

}
//指定排序规则
bool myCompare(Person& p1,Person& p2)
{
	if (p1.m_Age == p2.m_Age)
		return p1.m_Height > p2.m_Height;
	else
		return p1.m_Age < p2.m_Age;
}

void test01()
{
	Person p1( 18, 178,"王琰");
	Person p2( 18, 128,"王一");
	Person p3( 18, 158,"赵二");
	Person p4( 33, 198,"王三");
	Person p5( 88, 128,"丁五");
	list<Person> l1;
	l1.push_back(p1);
	l1.push_back(p2);
	l1.push_back(p3);
	l1.push_back(p4);
	l1.push_back(p5);

	
	l1.sort(myCompare);

	myPrint(l1);

}

int main()
{
	test01();
	system("pause");
}