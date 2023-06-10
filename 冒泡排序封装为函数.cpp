#include<iostream>
using namespace std;
void bubblesort(int arr[],int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - 1 - i; j++)
		{
			if (*(arr + j) > *(arr + j + 1))
			{
				int tmp;
				tmp = *(arr + j);
				*(arr + j) = *(arr + j + 1);
				*(arr + j + 1) = tmp;

			}
		}
	}


}



int main()
{
	int arr[9] = {4,2,7,9,1,3,5,8,6};
	bubblesort(arr,9);
	for (int i = 0; i < 9; i++)
		cout << arr[i] << endl;
	system("pause");
}