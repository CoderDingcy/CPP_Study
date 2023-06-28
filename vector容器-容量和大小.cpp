#include<iostream>
using namespace std;
#include<vector>

void myPrint(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//vector容器的容量和大小操作
void test01()
{
	vector<int> v1;
	for (int i = 0; i < 10; i++)
		v1.push_back(i);
	myPrint(v1);

	if (v1.empty())
		cout << "容器为空" << endl;
	else
	{
		cout << "容器不为空" << endl;
		cout << "容器的容量为：" << v1.capacity() << endl;
		cout << "容器的大小为：" << v1.size() << endl;
	}
	
	//重新指定大小
	v1.resize(15,100);//如果重新指定长度比原来长，会填充默认值，即用0填充新的位置
	//利用重载版本可以指定默认填充值，即参数2
	myPrint(v1);

	v1.resize(5);//如果重新指定的比原来短，超出部分会删除掉
	myPrint(v1);
}
int main()
{
	test01();
	system("pause");
}