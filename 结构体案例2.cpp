#include<iostream>
#include<string>
using namespace std;
struct legend
{
	string name;
	int age;
	string sex;
};

void bubble(legend arr[], int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (arr[j].age > arr[j + 1].age)
			{
				legend tmp;
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
}
		}

	}
}

int main()
{
	legend larr[5] = {

		{"刘备",23,"男"},
		{"关羽",22,"男"},
		{"张飞",20,"男"},
		{"赵云",21,"男"},
		{"貂蝉",19,"女"}
	};
	int len;
	len = sizeof(larr) / sizeof(larr[0]);
	bubble(larr,len);
	for (int i = 0; i < 5; i++)
	{
		cout << "名称:" << larr[i].name << " " << "年纪:" << larr[i].age << " " << "性别:" << larr[i].sex << endl;
	}
	system("pause");
}