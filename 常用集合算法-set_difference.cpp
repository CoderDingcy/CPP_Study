#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//常用集合算法 set_difference 即求两个容器的差集 去掉集合中不是交集的部分
void myPrint(int val)
{
	cout << val << " ";
}

void test01()
{
	vector<int> v1;
	vector<int> v2;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 5);
	}

	//求并会把结果放到目标容器 目标容器需要提前开辟空间 开辟空间大小最特殊情况就是大容器的大小
	vector<int> vtarget;
	vtarget.resize(max(v1.size(),v2.size()));

	//获取差集
	vector<int>::iterator pos_end = set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), vtarget.begin());//返回的是并集的末尾元素的位置
	cout << "v1与v2的差集为：" << endl;
	for_each(vtarget.begin(), pos_end, myPrint);

	cout << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}