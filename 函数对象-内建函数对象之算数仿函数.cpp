#include<iostream>
using namespace std;
#include<functional>
//内建函数对象 算数仿函数

//negate 一元取反仿函数
void test01()
{
	negate<int> n;
	cout << n(50) << endl;
}
//plus  二元加法仿函数
void test02()
{
	plus<int> p;
	cout<<p(1, 2)<<endl;
}

int main()
{
	//test01();
	test02();
	system("pause");
}