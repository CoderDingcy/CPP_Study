#include<iostream>
using namespace std;

int main()
{
	int arr[5] = { 1,2,3,4,5 };
	cout << "���ԭ����Ԫ��:" << endl;
	for (int i = 0; i <= 4; i++)
		cout << arr[i] << endl;
	int start = 0;
	int end = sizeof(arr) / sizeof(arr[0]) - 1;
	int tmp;
	for(;start < end;start++,end--)
	{
		tmp = arr[start];
		arr[start] = arr[end];
		arr[end] = tmp;
	}
	cout << "������ú�����:" << endl;
	for (int i = 0; i <= 4; i++)
		cout << arr[i] << endl;
	system("pause");
}