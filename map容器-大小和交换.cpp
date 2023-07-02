#include<iostream>
#include<map>
using namespace std;

//map容器 大小和交换
void myPrint(map<int,int>& m)
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
		cout << "key:" << it->first << " value:" << it->second << endl;
}

//大小
void test01()
{
	//创建容器
	map<int, int> m;
	m.insert(pair<int,int>(1, 23));
	m.insert(pair<int,int>(5, 24));
	m.insert(pair<int,int>(3, 25));
	m.insert(pair<int,int>(4, 26));
	if (m.empty())
		cout << "容器m为空" << endl;
	else
	{
		cout << "容器m不为空，大小为" << m.size() << endl;
		cout << "容器m内容为：" << endl;
		myPrint(m);
	}
	
}

//交换
void test02()
{
	map<int, int> m1;
	m1.insert(pair<int, int>(1, 23));
	m1.insert(pair<int, int>(5, 24));
	m1.insert(pair<int, int>(3, 25));
	m1.insert(pair<int, int>(4, 26));
	
	map<int, int> m2;
	m2.insert(pair<int, int>(32, 23));
	m2.insert(pair<int, int>(22, 24));
	m2.insert(pair<int, int>(333, 25));
	m2.insert(pair<int, int>(4443, 26));
	cout << "交换前：" << endl;
	myPrint(m1);
	cout << endl;
	myPrint(m2);
	m1.swap(m2);
	cout << "交换后：" << endl;
	myPrint(m1);
	cout << endl;
	myPrint(m2);
}

int main()
{
	test02();
	system("pause");
}