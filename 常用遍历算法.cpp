#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//常用遍历算法for_each
//普通函数
void myPrint01(int v)
{
	cout << v<<" ";
}

//仿函数
class myPrint02
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}

};
void test01()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
		v.push_back(i);
	for_each(v.begin(), v.end(), myPrint01);
	cout << endl;

	for_each(v.begin(), v.end(), myPrint02());
	cout << endl;
}

int main()
{
	test01();
	system("pause");
}