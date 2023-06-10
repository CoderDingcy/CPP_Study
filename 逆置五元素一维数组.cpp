#include<iostream>
using namespace std;

int main()
{
	int arr[5] = { 1,2,3,4,5 };
	cout << "输出原数组元素:" << endl;
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
	cout << "输出逆置后数组:" << endl;
	for (int i = 0; i <= 4; i++)
		cout << arr[i] << endl;
	system("pause");
}