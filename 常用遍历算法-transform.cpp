#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

//常用遍历算法 transform
class Transform
{
public:
	int operator()(int v)
	{
		return v;
	}
};

class myPrint
{
public:
	void operator()(int v)
	{
		cout << v << " ";
	}
};
void test01()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
		v.push_back(i);

	vector<int> vtarget;
	vtarget.resize(v.size());//记得要申请容量
	transform(v.begin(), v.end(), vtarget.begin(), Transform());
	for_each(vtarget.begin(), vtarget.end(), myPrint());
	cout << endl;
}

int main()
{
	test01();
	system("pause");
}