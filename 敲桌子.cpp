#include<iostream>
using namespace std;

int main()
{
	for (int i = 1; i <= 100; i++)
	{
		if (i % 10 == 7)
			cout << "�����ӣ�" << endl;
		else if (i % 7 == 0)
			cout << "�����ӣ�" << endl;
		else if (i / 10 == 7)
			cout << "�����ӣ�" << endl;
		else
			cout << i << endl;
}
	system("pause");

}