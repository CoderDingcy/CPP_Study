#include<iostream>
using namespace std;
int GetRandomNumber()
{
	int RandomNumber;
	srand((unsigned)time(NULL));//time()��ϵͳʱ���ʼ���֡�Ϊrand()���ɲ�ͬ��������ӡ�
	RandomNumber = rand() % 100 + 1;//����1~100�����
	return RandomNumber;
}
int main()
{
	int num1 = GetRandomNumber();
	cout << "����������:" <<endl;
	int num2 = 0;
	cin >> num2;
	while (num1 != num2)
	{
		if (num2 > num1)
		{
			cout << "�´��ˣ����������룡" << endl;
			cin >> num2;
		}
		else if (num2 < num1)
		{
			cout << "��С�ˣ����������룡" << endl;
			cin >> num2;
		}

	}
	cout << "��ϲ�㣬�¶��ˣ�" << endl;
	cout << "�����Ϊ" << num1;



}