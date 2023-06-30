#include<iostream>
using namespace std;
#include<queue>

class Person
{
public:
	Person(string name,int age)
	{
		m_Age = age;
		m_Name = name;
	}
	int m_Age;
	string m_Name;
};

//队列 queue
void test01()
{
	//创建队列
	queue<Person> q;

	//准备数据
	Person p1("唐僧", 30);
	Person p2("孙悟空", 300);
	Person p3("猪八戒", 3000);
	Person p4("沙和尚", 30000);

	//入队
	q.push(p1);
	q.push(p2);
	q.push(p3);
	q.push(p4);
	cout << "队列大小为：" << q.size() << endl;

	//只要队列不为空 查看队头 查看队尾 出队
	while (!q.empty())
	{
		cout << "队头元素--姓名：" << q.front().m_Name << " 队头元素--年龄：" << q.front().m_Age << endl;
		cout << "队尾元素--姓名：" << q.back().m_Name << " 队尾元素--年龄：" << q.back().m_Age << endl;
		q.pop();
	}

	cout << "队列大小为：" << q.size() << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}