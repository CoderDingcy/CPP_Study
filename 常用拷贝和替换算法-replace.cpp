#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//常用拷贝和替换算法 replace
void myPrint(int val)
{
	cout << val << " ";
}

void test01()
{
	vector<int> v1;
	v1.push_back(10);
	v1.push_back(10);
	v1.push_back(10);
	v1.push_back(10);
	v1.push_back(10);
	cout << "替换前：" << endl;
	for_each(v1.begin(), v1.end(), myPrint);
	cout << endl;

	cout << "替换后：" << endl;
	replace(v1.begin(), v1.end(), 10, 20);
	for_each(v1.begin(), v1.end(), myPrint);

	cout << endl;
}

int main()
{

	test01();
	system("pause");
}