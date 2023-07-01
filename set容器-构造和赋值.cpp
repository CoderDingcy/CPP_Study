#include<iostream>
#include<set>
using namespace std;

//set容器的赋值与构造

void myPrint(const set<int>& s)
{
	for (set<int>::const_iterator it = s.begin(); it != s.end(); it++)
		cout << *it << " ";
	cout << endl;
}

void test01()
{
	//set容器只有insert方法
	set<int> s1;
	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(30);
	s1.insert(40); 

	//遍历容器
	//set容器特点：会自动给插入元素排序 去重
	myPrint(s1);

	//拷贝构造
	set<int>s2(s1);
	myPrint(s2);

	//赋值
	set<int>s3 = s2;
	myPrint(s3);


}

int main()
{
	test01();
	system("pause");
}