#include<iostream>
using namespace std;
#include<vector>

void myPrint(vector<int> v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it<<" ";
	}
	cout << endl;
}
//vector��������
void test01()
{
	vector<int> v1;//Ĭ�Ϲ�������
	for (int i = 0; i < 10; i++)
		v1.push_back(i);
	myPrint(v1);

	//ͨ������ķ�ʽ�����й���
	vector<int> v2(v1.begin(), v1.end());
	myPrint(v2);

	//n��elem�ķ�ʽ�����й���
	vector<int> v3(10, 100);
	myPrint(v3);

	//��������
	vector<int> v4(v3);
	myPrint(v4);
}


int main()
{
	test01();
	system("pause");
}