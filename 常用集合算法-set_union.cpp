#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//常用集合算法 set_union 即求两个容器的并集
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

	//求并会把结果放到目标容器 目标容器需要提前开辟空间 开辟空间大小为两个容器大小之和
	vector<int> vtarget;
	vtarget.resize(v1.size() + v2.size());

	//获取并集
	vector<int>::iterator pos_end = set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), vtarget.begin());//返回的是并集的末尾元素的位置

	for_each(vtarget.begin(), pos_end, myPrint);

	cout << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}