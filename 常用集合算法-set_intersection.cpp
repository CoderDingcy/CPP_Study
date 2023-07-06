#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//���ü����㷨 set_intersection �������������Ľ���
void myPrint(int val)
{
	cout << val << " ";
}

void test01()
{
	vector<int> v1;
	vector<int> v2;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i+5);
	}

	//�󽻼���ѽ���ŵ�Ŀ������ Ŀ��������Ҫ��ǰ���ٿռ� ���ٿռ��С���Ϊ�����пռ��С����һ��
	vector<int> vtarget;
	vtarget.resize(v1.size()>v2.size()? v2.size():v1.size());

	//��ȡ����
	vector<int>::iterator pos_end=set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), vtarget.begin());//���ص��ǽ�����ĩβ

	for_each(vtarget.begin(), pos_end, myPrint);

	cout << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}