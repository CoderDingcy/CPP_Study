#include<iostream>
#include<set>
using namespace std;

//set容器的查找和统计
void myPrint(const set<int>& s)
{
	for (set<int>::const_iterator it = s.begin(); it != s.end(); it++)
		cout << *it << " ";
	cout << endl;
}

//查找
void test01()
{
	set<int> s1;
	s1.insert(10);
	s1.insert(30);
	s1.insert(40);
	s1.insert(20);
	myPrint(s1);

	set<int>::iterator it = s1.find(40);//find方法返回的是迭代器的位置
	if (it != s1.end())
		cout << "找到元素" <<*it<< endl;
	else
		cout << "未找到" << endl;

}

//统计
void test02()
{
	set<int> s1;
	s1.insert(10);
	s1.insert(10);
	s1.insert(10);
	s1.insert(10);
	s1.insert(20);
	s1.insert(20);
	s1.insert(20);
	//对于set而言 统计结果要么是0要么是1 因为会去重
	cout << "s1中的20的个数为" << s1.count(30) << endl;
}

int main()
{
	test02();
	system("pause");
}