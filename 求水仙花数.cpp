//水仙花数指的是三位数，它的每个位的三次幂之和等于它本身
#include<iostream>
using namespace std;
int main()
{
	int num =100;
	int num1, num2, num3,sum=0;
	do {
		num3 = num / 100;
		num2 = num / 10 - num3 * 10;
		num1 = num - num2 * 10 - num3 * 100;
		sum = num1 * num1 * num1 + num2 * num2 * num2 + num3 * num3 * num3;
		if(sum==num)
			cout<<num<<endl;
		num++;
	} while (num<1000);
	system("pause");
}