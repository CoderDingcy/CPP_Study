#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//���ÿ������滻�㷨 replace
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
	cout << "�滻ǰ��" << endl;
	for_each(v1.begin(), v1.end(), myPrint);
	cout << endl;

	cout << "�滻��" << endl;
	replace(v1.begin(), v1.end(), 10, 20);
	for_each(v1.begin(), v1.end(), myPrint);

	cout << endl;
}

int main()
{

	test01();
	system("pause");
}