#include<iostream>
#include<string>
using namespace std;
#define MAX 1000
struct f
{
	string name;
	int sex;
	int age;
	string tel;
	string addr;
};
struct address {
	f arr[MAX];
	int fnum;
};
void showmenu()
{
	cout << "*****************************" << endl;
	cout << "*****\t1、添加联系人\t*****" << endl;
	cout << "*****\t2、显示联系人\t*****" << endl;
	cout << "*****\t3、删除联系人\t*****" << endl;
	cout << "*****\t4、查找联系人\t*****" << endl;
	cout << "*****\t5、修改联系人\t*****" << endl;
	cout << "*****\t6、清空联系人\t*****" << endl;
	cout << "*****\t0、退出通讯录\t*****" << endl;
	cout << "*****************************" << endl;

}
void addf(address* a)
{
	if (a->fnum >= 1000)
	{
		cout << "通讯录已满不可继续添加！" << endl;
		return;
	}
	else {
		cout << "请输入联系人姓名：" << endl;
		cin >> a->arr[a->fnum].name;
		cout << "请输入联系人性别：" << endl;
		cout << "1---男" << endl;
		cout << "2---女" << endl;
	
		while (true)
		{
			cin >> a->arr[a->fnum].sex;
			if (a->arr[a->fnum].sex == 1 || a->arr[a->fnum].sex == 2)
				break;
			else
				cout << "输入有误，请重新输入！" << endl;
		}
		cout << "请输入联系人年龄：" << endl;
		cin >> a->arr[a->fnum].age;
		cout << "请输入联系人电话号码：" << endl;
		cin >> a->arr[a->fnum].tel;
		cout << "请输入联系人家庭住址：" << endl;
		cin >> a->arr[a->fnum].addr;
		cout << "添加成功！" << endl;
		a->fnum++;

	}
	system("pause");
	system("cls");
}
void listf(address* a)
{
	if (a->fnum == 0)
		cout << "当前记录为空！" << endl;
	else {
		for (int i = 0; i < (a->fnum); i++)
		{
			cout << "姓名:" << a->arr[i].name << " 性别:" << (a->arr[i].sex==1?"男":"女")<< " 年龄:" << a->arr[i].age << " 电话:" << a->arr[i].tel << " 住址:" << a->arr[i].addr << endl;
		}
	}
	system("pause");
	system("cls");
}
int IsExist(address* a, string name)
{
	for (int i = 0; i < a->fnum; i++)
	{
		if (a->arr[i].name == name)
		{
			return i;
		}
	}
	return -1;
}
void deletef(address* a)
{
	cout << "请输入您要删除的联系人姓名：" << endl;
	string name;
	cin >> name;
	int ret = IsExist(a, name);
	if (ret != -1)
	{
		for (int i = ret; i < a->fnum; i++)
		{
			a->arr[i] = a->arr[i + 1];
		}
		a->fnum--;
		cout << "删除成功" << endl;
	}
	else
		cout << "查无此人！" << endl; 
	system("pause");
	system("cls");
}
void searchf(address* a)
{
	cout << "请输入需要查找的联系人姓名：" << endl;
	string name;
	cin >> name;
	int ret = IsExist(a, name);
	if (ret != -1)
	{
		for (int i = 0; i < a->fnum; i++)
		{
			if (a->arr[i].name == name)
				cout << "姓名:" << a->arr[i].name << " 性别:" << (a->arr[i].sex == 1 ? "男" : "女") << " 年龄:" << a->arr[i].age << " 电话:" << a->arr[i].tel << " 住址:" << a->arr[i].addr << endl;
		}
	}
	else
		cout << "查无此人！" << endl;
	system("pause");
	system("cls");
}
void changef(address* a)
{
	cout << "请输入需要修改信息的联系人姓名：" << endl;
	string name;
	cin >> name;
	int ret = IsExist(a, name);
	if (ret != -1)
	{
		cout << "请输入姓名：" << endl;
		cin >> a->arr[ret].name;
		cout << "请输入性别：" << endl;
		cout << "1---男" << endl;
		cout << "2---女" << endl;
	
		while (true)
		{
			cin >> a->arr[ret].sex;
			if (a->arr[ret].sex == 1 || a->arr[ret].sex == 2)
				break;
			else
				cout << "输入有误，请重新输入！" << endl;
		}
		cout << "请输入年龄：" << endl;
		cin >> a->arr[ret].age;
		cout << "请输入电话：" << endl;
		cin >> a->arr[ret].tel;
		cout << "请输入住址：" << endl;
		cin >> a->arr[ret].addr;
		cout << "修改成功" << endl;
	}
	else
		cout << "查无此人！" << endl;
	system("pause");
	system("cls");
}
void clear(address* a)
{
	a->fnum = 0;
	cout << "通讯录已经清空！" << endl;
	system("pause");
	system("cls");
}
int main()
{
	int select = 0;
	address a;
	a.fnum = 0;
	while (true)
	{
		showmenu();
		cin >> select;
		switch (select)
		{
		case 1:
			addf(&a);
			break;
		case 2:
			listf(&a);
			break;
		case 3:
		/*{
		cout << "请输入您要删除的联系人姓名：" << endl;
		string name;
		cin >> name;
		if (IsExist(a, name) == -1)
			cout << "查无此人！" << endl;
		else
			cout << "找到此人！" << endl;
		}*/
			deletef(&a);
			break;
		case 4:
			searchf(&a);
			break;
		case 5:
			changef(&a);
			break;
		case 6:
			clear(&a);
			break;
		case 0:
			cout << "您已经退出系统,欢迎下次使用" << endl;
			system("pause");
			return 0;
			break;
		}
	}
}