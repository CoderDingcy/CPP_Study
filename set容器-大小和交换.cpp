#include<iostream>
#include<set>
using namespace std;
void myPrint(const set<int>& s)
{
	for (set<int>::const_iterator it = s.begin(); it != s.end(); it++)
		cout << *it << " ";
	cout << endl;
}
//大小
void test01()
{
	set<int> s1;
	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(40);
	if (s1.empty())
		cout << "s1为空" << endl;
	else
	{
		cout << "s1不为空" << endl;
		cout << "s1大小为" << s1.size() << endl;
	}

}
//交换
void test02()
{
	set<int> s1;
	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(40);

	set<int> s2;
	s2.insert(100);
	s2.insert(300);
	s2.insert(200);
	s2.insert(400);

	cout << "交换前：" << endl;
	myPrint(s1);
	myPrint(s2);
	cout << "交换后：" << endl;
	s1.swap(s2);
	myPrint(s1);
	myPrint(s2);
}

int main()
{
	//test01();
	test02();
	system("pause");
}