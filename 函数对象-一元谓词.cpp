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

//�º�������bool���ͳ�Ϊν�� һ��������ΪһԪν�� ����������Ϊ��Ԫν��
void test01()
{
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}

	//������������û�д���5������
	//find_if��������ʼλ�� ����λ�� ��������
	//GreaterFive()Ϊ������������
	//find_if����ҵ��˻᷵�ص�������λ�� û�ҵ�����endλ��
	vector<int>::iterator pos=find_if(v1.begin(), v1.end(), GreaterFive());
	if (pos == v1.end())
		cout << "������δ�ҵ�����5������" << endl;
	else
		cout << "�ҵ��ˣ�" <<*pos<< endl;

}

int main()
{
	test01();
	system("pause");
}