#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//常用查找算法 binary_search  二分查找法效率虽然很高 但是查找的序列必须是有序的序列
void test01()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
		v.push_back(i);

	//查找容器中是否有元素1

	if (binary_search(v.begin(),v.end(),1))
		cout << "找到元素1" << endl;
	else
		cout << "未找到了元素1" << endl;
}

int main()
{
	test01();
	system("pause");
}