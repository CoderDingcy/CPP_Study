#include<iostream>
#include<set>
using namespace std;

//set容器 multiset容器区别
void myPrint(const set<int>& s)
{
	for (set<int>::const_iterator it = s.begin(); it != s.end(); it++)
		cout << *it << " ";
	cout << endl;
}

void test01()
{
	set<int> s1;
	//这里使用对组来接收插入的结果
	pair<set<int>::iterator,bool> ret=s1.insert(10);
	if (ret.second)
	{
		cout << "插入成功" << endl;
	}
	else
	{
		cout << "插入失败" << endl;
	}
	ret = s1.insert(10);
	if (ret.second)
	{
		cout << "插入成功" << endl;
	}
	else
	{
		cout << "插入失败" << endl;
	}
	myPrint(s1);

	multiset<int> ms;
	//multiset容器允许插入重复的值
	ms.insert(10);
	ms.insert(10);
	for (multiset<int>::iterator it = ms.begin(); it != ms.end(); it++)
		cout << *it << " ";
	cout << endl;
}

int main()
{
	test01();
	system("pause");
}