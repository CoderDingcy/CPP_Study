#include<iostream>
#include<vector>
#include<functional>
#include<algorithm>
#include<ctime>
using namespace std;

//常用排序算法中的random_shuffle 打乱顺序重新洗牌
void myPrint(int val)
{
	cout << val << " ";
}

void test01()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	random_shuffle(v.begin(), v.end());
	for_each(v.begin(), v.end(), myPrint);
	cout << endl;
}

int main()
{
	srand((unsigned int)time(NULL));
	test01();
	system("pause");
}