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

	list<int> l2(l1);
	myPrint(l2);

	list<int> l3(l2.begin(), l2.end());
	myPrint(l3);

	list<int> l4(10, 100);
	myPrint(l4);

}


int main()
{
	test01();
	system("pause");
}