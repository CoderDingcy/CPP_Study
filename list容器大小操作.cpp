#include<iostream>
#include<list>
using namespace std;

void myPrint(const list<int>& l)
{
	for (list<int>::const_iterator it = l.begin(); it != l.end(); it++)
		cout << *it << " ";
	cout << endl;
}

void test01()
{
	list<int> l1;
	l1.push_back(10);
	l1.push_back(20);
	l1.push_back(30);
	l1.push_back(40);

	myPrint(l1);

	//�ж������Ƿ�Ϊ��
	if (l1.empty())
		cout << "����Ϊ�գ�" << endl;
	else
		cout << "������Ϊ�գ�" << endl;
	cout << "�����е�Ԫ�ظ���Ϊ��" << l1.size() << endl;
	
	//����ָ��������С
	l1.resize(10);
	myPrint(l1); 
	l1.resize(15,20);
	myPrint(l1);
}

int main()
{
	test01();
	system("pause");
}