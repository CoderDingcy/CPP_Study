#include<iostream>
using namespace std;

int main()
{
	int arr[9] = {0,4,3,5,8,6,7,2,1};
	cout << "���ԭ����Ԫ�أ�" << endl;

	for (int i = 0; i <= 8; i++)
		cout << arr[i] << " ";
	cout << endl;
	int tmp;
	//ð������
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j <8 - i; j++)
		{
			if (arr[j + 1] < arr[j])
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}

	}
	cout << "���ð������������Ԫ�أ�" << endl;
	for (int i = 0; i <= 8; i++)
		cout << arr[i] << " ";
	cout << endl;
	system("pause");
}