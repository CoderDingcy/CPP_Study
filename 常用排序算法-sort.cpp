#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<functional>
using namespace std;

//常用排序算法 sort
void myPrint(int v)
{
	cout << v << " ";
}

void test01()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(30);
	v.push_back(20);
	v.push_back(40);
	v.push_back(50);

	//sort进行升序
	sort(v.begin(),v.end());
	for_each(v.begin(), v.end(), myPrint);
	cout << endl;

	//sort进行降序
	sort(v.begin(), v.end(), greater<int>());
	for_each(v.begin(), v.end(), myPrint);
	cout << endl;
}

int main()
{
	test01();
	system("pause");
}