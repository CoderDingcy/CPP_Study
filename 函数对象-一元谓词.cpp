#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class GreaterFive
{
public:
	bool operator()(int v)
	{
		return v > 5;
	}
};

//仿函数返回bool类型称为谓词 一个参数称为一元谓词 两个参数称为二元谓词
void test01()
{
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}

	//查找容器中有没有大于5的数字
	//find_if参数：起始位置 结束位置 函数对象
	//GreaterFive()为匿名函数对象
	//find_if如果找到了会返回迭代器的位置 没找到返回end位置
	vector<int>::iterator pos=find_if(v1.begin(), v1.end(), GreaterFive());
	if (pos == v1.end())
		cout << "容器中未找到大于5的数字" << endl;
	else
		cout << "找到了：" <<*pos<< endl;

}

int main()
{
	test01();
	system("pause");
}