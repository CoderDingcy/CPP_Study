#include<iostream>
#include<list>
using namespace std;
#include<algorithm>

void myPrint(const list<int>& l)
{
	for (list<int>::const_iterator it = l.begin(); it != l.end();it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

bool myCompare(int v1, int v2)
{
	//降序 第一个数>第二个数
	return v1 > v2;
}

void test01()
{
	list<int> l1;
	l1.push_back(20);
	l1.push_back(40);
	l1.push_back(10);
	l1.push_back(30);
	cout << "反转前的打印：" << endl;
	myPrint(l1);
	cout << "反转后的打印：" << endl;
	l1.reverse();
	myPrint(l1);

	//所有不支持随机访问的迭代器的容器 不可以使用标准的算法 例如：sort（）
	//不支持随机访问的迭代器的容器内部会提供算法
	cout << "排序后的打印：" << endl;
	//sort(l1.begin(), l1.end());
	l1.sort();//默认排序规则：从小到大-升序
	myPrint(l1);
	l1.sort(myCompare);//降序
	myPrint(l1);
}

int main()
{
	test01();
	system("pause");
}