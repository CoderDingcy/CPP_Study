#include<iostream>
using namespace std;
#include<deque>
//deque 构造函数

void myPrint(deque<int>& d1)//想要限制容器为只读加const 同时迭代器也要从iterator改为const_iterator
{
	for (deque<int>::const_iterator it = d1.begin(); it != d1.end(); it++)
	{
		//*it=100会报错 因为加上const之后容器是只读的不可被修改
		cout << *it << " ";

	}
cout<<endl;
}

void test01()
{
	deque<int> d1;
	for (int i = 0; i < 10; i++)
		d1.push_back(i);
	myPrint(d1);

	deque<int> d2(d1.begin(), d1.end());
	myPrint(d2);

	deque<int> d3(d2);
	myPrint(d3);

	deque<int> d4(10, 100);
	myPrint(d4);
}

int main()
{
	test01();
	system("pause");
}