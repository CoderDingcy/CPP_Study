#include<iostream>
using namespace std;
#include<deque>

void myPrint(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
		cout << *it << " ";
	cout << endl;
}

void test01()
{
	deque<int> d;
	//Œ≤≤Â
	d.push_back(10);
	d.push_back(20);
	//Õ∑…æ
	d.push_front(100);
	d.push_front(200);

	myPrint(d);
	//Œ≤…æ
	d.pop_back();
	d.pop_front();
	myPrint(d);
}


void test02()
{
	deque<int> d;
	//Œ≤≤Â
	d.push_back(10);
	d.push_back(20);
	//Õ∑…æ
	d.push_front(100);
	d.push_front(200);

	myPrint(d);
	//insert≤Â»Î
	d.insert(d.begin(), 100);
	myPrint(d);
	d.insert(d.begin(), 10,100);
	myPrint(d);

	deque<int> d1;
	d1.push_back(1);
	d1.push_back(2);
	d1.push_back(3);
	d.insert(d.begin(), d1.begin(), d1.end());
		myPrint(d);
}

void test03()
{

}

int main()
{
	//test01();
	test02();

	system("pause");
}