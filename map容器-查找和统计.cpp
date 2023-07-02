#include<iostream>
#include<map>
using namespace std;

//map容器 查找和统计
void myPrint(map<int, int>& m)
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
		cout << "key:" << it->first << "\tvalue:" << it->second << endl;
}


void test01()
{
	map<int, int> m;

	m.insert(pair<int, int>(1, 23));
	m.insert(pair<int, int>(5, 24));
	m.insert(pair<int, int>(3, 25));
	m.insert(pair<int, int>(4, 26));
	//查找
	map<int, int>::iterator pos = m.find(5);
	if (pos != m.end())
	{
		cout << "找到了" << endl;
		cout << "key=" << pos->first << "\tvalue=" << pos->second << endl;
	}
	else
		cout << "未找到元素" << endl;

	//统计
	//因为map容器去重 所以结果不是0就是1
	//multimap结果可能大于1
	int num = 0;
	num = m.count(3);
	cout << "num=" << num << endl;
}

int main()
{
	test01();
	system("pause");
}