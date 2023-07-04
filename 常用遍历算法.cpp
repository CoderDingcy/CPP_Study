#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//���ñ����㷨for_each
//��ͨ����
void myPrint01(int v)
{
	cout << v<<" ";
}

//�º���
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