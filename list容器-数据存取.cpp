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
	//尾插
	l1.push_back(10);
	l1.push_back(20);
	l1.push_back(20);
	l1.push_back(30);
	//头插
	l1.push_front(100);
	l1.push_front(200);
	l1.push_front(300);
	myPrint(l1);
	//list不能使用[]或at来进行数据存取 因为list中元素不是线性连续的方式进行存储 迭代器是不支持随机访问的

	cout << "第一个元素：" << l1.front()<<endl;
	cout << "最后一个元素：" << l1.back()<<endl;

	//验证迭代器
	list<int>::iterator it = l1.begin();
	it++;//支持双向访问
	it--;

	//it = it + 1;//这样会报错 不支持随机访问

}

int main()
{
	test01();
	system("pause");
}