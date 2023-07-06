#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//常用排序算法中的merge 合并必须是两个有序序列才能合到一起
void myPrint(int val)
{
	cout << val << " ";
}

void test01()
{
	vector<int> v1;
	vector<int> v2;
	vector<int> v3;

	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);
	v1.push_back(4);
	v1.push_back(5);

	v2.push_back(6);
	v2.push_back(7);
	v2.push_back(8);
	v2.push_back(9);
	v2.push_back(10);

	v3.resize(v1.size() + v2.size());
	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
	for_each(v3.begin(), v3.end(), myPrint);
	cout << endl;
}

int main()
{

	test01();
	system("pause");
}