#include<iostream>
using namespace std;
#include<deque>

void myPrint(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
		cout << *it << " ";
	cout << endl;
}

//dequeÈÝÆ÷¸³Öµ²Ù×÷
void test01()
{
	deque<int> d1;
	for (int i = 0; i < 10; i++)
		d1.push_back(i);
	myPrint(d1);

	//operator=
	deque<int> d2;
	d2 = d1;
	myPrint(d2);

	//assign
	deque<int> d3;
	d3.assign(d1.begin(), d1.end());
	myPrint(d3);

	deque<int> d4;
	d4.assign(10,100);
	myPrint(d4);


}

int main()
{
	test01();
	system("pause");
}