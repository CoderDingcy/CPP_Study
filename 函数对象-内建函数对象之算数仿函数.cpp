#include<iostream>
using namespace std;
#include<functional>
//�ڽ��������� �����º���

//negate һԪȡ���º���
void test01()
{
	negate<int> n;
	cout << n(50) << endl;
}
//plus  ��Ԫ�ӷ��º���
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