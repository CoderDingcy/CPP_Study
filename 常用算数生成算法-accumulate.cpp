#include<iostream>
#include<vector>
#include<numeric>
using namespace std;

//�������������㷨 accumulate
void myPrint(int val)
{
	cout << val << " ";
}

void test01()
{
	vector<int> v1;
	for (int i = 0; i <=100; i++)
	{
		v1.push_back(i);
}
	int num=accumulate(v1.begin(), v1.end(), 0);
	cout << "����v1�������ۼ�֮��Ϊ" << num << endl;

}

int main()
{
	test01();
	system("pause");
}