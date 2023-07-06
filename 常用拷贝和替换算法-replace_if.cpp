#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//常用拷贝和替换算法 replace_if
void myPrint(int val)
{
	cout << val << " ";
}

class Greater30
{
public:
	bool operator()(int val)
	{
		return val >= 30;
	}
};
void test01()
{
	vector<int> v1;
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(10);
	cout << "替换前：" << endl;
	for_each(v1.begin(), v1.end(), myPrint);
	cout << endl;

	//将大于等于30的替换为3000
	cout << "替换后：" << endl;
	replace_if(v1.begin(), v1.end(), Greater30(), 3000);
	for_each(v1.begin(), v1.end(), myPrint);

	cout << endl;
}

int main()
{

	test01();
	system("pause");
}