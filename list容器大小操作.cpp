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

	//判断容器是否为空
	if (l1.empty())
		cout << "容器为空！" << endl;
	else
		cout << "容器不为空！" << endl;
	cout << "容器中的元素个数为：" << l1.size() << endl;
	
	//重新指定容器大小
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