#include<iostream>
using namespace std;

int main()
{
	int scores[3][3] = {
		{100,100,100},
		{90,70,80},
		{10,60,40}
	};
	for (int i = 0; i < 3; i++)
	{
		int sum = 0;
		for (int j = 0; j < 3; j++)
		{
			sum = sum + scores[i][j];
		}
		cout << "��" << i+1 << "λͬѧ�ܷ�ͳ��Ϊ��" << sum << endl;
	}
	system("pause");
}