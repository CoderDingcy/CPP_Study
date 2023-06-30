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

//���� queue
void test01()
{
	//��������
	queue<Person> q;

	//׼������
	Person p1("��ɮ", 30);
	Person p2("�����", 300);
	Person p3("��˽�", 3000);
	Person p4("ɳ����", 30000);

	//���
	q.push(p1);
	q.push(p2);
	q.push(p3);
	q.push(p4);
	cout << "���д�СΪ��" << q.size() << endl;

	//ֻҪ���в�Ϊ�� �鿴��ͷ �鿴��β ����
	while (!q.empty())
	{
		cout << "��ͷԪ��--������" << q.front().m_Name << " ��ͷԪ��--���䣺" << q.front().m_Age << endl;
		cout << "��βԪ��--������" << q.back().m_Name << " ��βԪ��--���䣺" << q.back().m_Age << endl;
		q.pop();
	}

	cout << "���д�СΪ��" << q.size() << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}