#include<iostream>
#include<vector>
#include<numeric>
#include<algorithm>
using namespace std;

//常用算数生成算法 fill
void myPrint(int val)
{
	cout << val << " ";
}

void test01()
{
	vector<int> v;
	v.resize(10);

	fill(v.begin(), v.end(), 100);

	for_each(v.begin(), v.end(), myPrint);
	cout << endl;
}

int main()
{
	test01();
	system("pause");
}