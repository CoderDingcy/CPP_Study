#include<iostream>
using namespace std;
#include<vector>

//vector����-Ԥ���ռ�
void test01()
{
	vector<int> v1;
	//����reserve��Ԥ���ռ�
	v1.reserve(100000);//�������Ա��⿪�ٿռ�

	//ͳ�ƿ��ٴ���
	int* p = NULL;
	int num = 0;
	for (int i = 0; i < 100000; i++)
	{
		v1.push_back(i);
		if (p != &v1[0])
		{
			p = &v1[0];
			num++;
		}
	}

	cout << "���ٴ���Ϊ��" << num << endl;
}

int main()
{
	test01();
	system("pause");
}