#include<iostream>
#include<vector>
#include<numeric>
using namespace std;

//常用算数生成算法 accumulate
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
	cout << "容器v1内数据累加之和为" << num << endl;

}

int main()
{
	test01();
	system("pause");
}