#include<iostream>
#include<string>
#include<ctime>
using namespace std;

struct Student
{
	string Sname;
	int score;
};

struct Teacher
{
	string Tname;
	Student Sarr[5];
};

void Allocate(Teacher arr[],int len)
{
	string nameseed = "ABCDE";
	for (int i = 0; i < len; i++)
	{
		arr[i].Tname = "Teacher_";
		arr[i].Tname += nameseed[i];
		for (int j = 0; j < 5; j++)
		{
		
			arr[i].Sarr[j].score = rand()%100+1;
			arr[i].Sarr[j].Sname = "Student_";
			arr[i].Sarr[j].Sname += nameseed[j];
		}
	}
}

void print(Teacher* arr, int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i].Tname << "老师指导的学生：" << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << "学生" << arr[i].Sarr[j].Sname << " " << "成绩为" << arr[i].Sarr[j].score << endl;
		}
}
}

int main()
{
	srand((unsigned)time(NULL));
	Teacher Tarr[3];
	int len = sizeof(Tarr) / sizeof(Tarr[0]);
	Allocate(Tarr, len);
	print(Tarr,len);
	system("pause");
}