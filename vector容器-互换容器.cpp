#include<iostream>
using namespace std;
#include<vector>

//vector容器互换

void myPrint(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
		cout << *it << " ";
	cout << endl;
}

//1、基本使用
void test01()
{
	vector<int> v1;
	for (int i = 0; i < 10; i++)
		v1.push_back(i);
	cout << "交换前：";
	myPrint(v1);

	vector<int> v2;
	for (int i = 10; i > 0; i--)
		v2.push_back(i);
	myPrint(v2);

	//交换后
	v1.swap(v2);
	cout << "交换后：";
	myPrint(v1);
	myPrint(v2);
}

//2、实际用途
//巧用swap可以收缩内存空间
void test02()
{
	vector<int> v;
	for (int i = 0; i < 100000; i++)
		v.push_back(i);
	cout << "容器的容量为：" << v.capacity()<<endl;
	cout << "容器的大小为：" << v.size()<<endl;

	v.resize(3);//重新指定大小
	cout << "容器的容量为：" << v.capacity() << endl;
	cout << "容器的大小为：" << v.size() << endl;

	//巧用swap收缩内存
	vector<int>(v).swap(v);
	//vector<int>(v)首先给出匿名对象，再调用拷贝构造函数用v对象来初始化匿名对象 具体解释见黑马p202
	cout << "容器的容量为：" << v.capacity() << endl;
	cout << "容器的大小为：" << v.size() << endl;
}

int main()
{
	test02();
	/*test01();*/
	system("pause");
}