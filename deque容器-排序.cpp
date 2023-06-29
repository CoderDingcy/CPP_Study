#include<iostream>
using namespace std;
#include<deque>
#include<algorithm>//标准算法头文件

void myPrint(const deque<int> d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
		cout << *it<<" ";
	cout << endl;
}

void test01()
{
	deque<int> d;
	d.push_back(10);
	d.push_back(20);
	d.push_back(30);
	d.push_front(100);
	d.push_front(200);
	d.push_front(300);
	myPrint(d);
	//排序 默认排序规则为升序
	//支持随机访问的迭代器的容器都可以用sort排序
	//例如 vector
	sort(d.begin(), d.end());
	cout << "排序后：";
	myPrint(d);

}

int main()
{
	test01();
	system("pause");
}