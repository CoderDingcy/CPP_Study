#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//���ò����㷨 binary_search  ���ֲ��ҷ�Ч����Ȼ�ܸ� ���ǲ��ҵ����б��������������
void test01()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
		v.push_back(i);

	//�����������Ƿ���Ԫ��1

	if (binary_search(v.begin(),v.end(),1))
		cout << "�ҵ�Ԫ��1" << endl;
	else
		cout << "δ�ҵ���Ԫ��1" << endl;
}

int main()
{
	test01();
	system("pause");
}