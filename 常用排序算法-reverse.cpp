#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//���������㷨 reverse
void myPrint(int val)
{
	cout << val << " ";
}

void test01()
{
	vector<int> v1;
	cout << "��תǰ��" << endl;
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);
	v1.push_back(60);
	for_each(v1.begin(), v1.end(), myPrint);
	cout << endl;

	cout << "��ת��" << endl;
	reverse(v1.begin(), v1.end());
	for_each(v1.begin(), v1.end(), myPrint);

	cout << endl;
}

int main()
{

	test01();
	system("pause");
}