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
	//Î²²å
	l1.push_back(10);
	l1.push_back(20);
	l1.push_back(20);
	l1.push_back(30);
	//Í·²å
	l1.push_front(100);
	l1.push_front(200);
	l1.push_front(300);
	myPrint(l1);

	//Í·É¾
	l1.pop_front();
	myPrint(l1);
	 
	//Î²É¾
	l1.pop_back();
	myPrint(l1);

	l1.insert(l1.begin(), 1000);
	myPrint(l1);

	l1.erase(l1.begin());
	myPrint(l1);

	l1.remove(20);
	myPrint(l1);

	l1.clear();
	myPrint(l1);
}

int main()
{
	test01();
	system("pause");
}