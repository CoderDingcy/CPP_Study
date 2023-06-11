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
	cout << "*****\t1�������ϵ��\t*****" << endl;
	cout << "*****\t2����ʾ��ϵ��\t*****" << endl;
	cout << "*****\t3��ɾ����ϵ��\t*****" << endl;
	cout << "*****\t4��������ϵ��\t*****" << endl;
	cout << "*****\t5���޸���ϵ��\t*****" << endl;
	cout << "*****\t6�������ϵ��\t*****" << endl;
	cout << "*****\t0���˳�ͨѶ¼\t*****" << endl;
	cout << "*****************************" << endl;

}
void addf(address* a)
{
	if (a->fnum >= 1000)
	{
		cout << "ͨѶ¼�������ɼ�����ӣ�" << endl;
		return;
	}
	else {
		cout << "��������ϵ��������" << endl;
		cin >> a->arr[a->fnum].name;
		cout << "��������ϵ���Ա�" << endl;
		cout << "1---��" << endl;
		cout << "2---Ů" << endl;
	
		while (true)
		{
			cin >> a->arr[a->fnum].sex;
			if (a->arr[a->fnum].sex == 1 || a->arr[a->fnum].sex == 2)
				break;
			else
				cout << "�����������������룡" << endl;
		}
		cout << "��������ϵ�����䣺" << endl;
		cin >> a->arr[a->fnum].age;
		cout << "��������ϵ�˵绰���룺" << endl;
		cin >> a->arr[a->fnum].tel;
		cout << "��������ϵ�˼�ͥסַ��" << endl;
		cin >> a->arr[a->fnum].addr;
		cout << "��ӳɹ���" << endl;
		a->fnum++;

	}
	system("pause");
	system("cls");
}
void listf(address* a)
{
	if (a->fnum == 0)
		cout << "��ǰ��¼Ϊ�գ�" << endl;
	else {
		for (int i = 0; i < (a->fnum); i++)
		{
			cout << "����:" << a->arr[i].name << " �Ա�:" << (a->arr[i].sex==1?"��":"Ů")<< " ����:" << a->arr[i].age << " �绰:" << a->arr[i].tel << " סַ:" << a->arr[i].addr << endl;
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
	cout << "��������Ҫɾ������ϵ��������" << endl;
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
		cout << "ɾ���ɹ�" << endl;
	}
	else
		cout << "���޴��ˣ�" << endl; 
	system("pause");
	system("cls");
}
void searchf(address* a)
{
	cout << "��������Ҫ���ҵ���ϵ��������" << endl;
	string name;
	cin >> name;
	int ret = IsExist(a, name);
	if (ret != -1)
	{
		for (int i = 0; i < a->fnum; i++)
		{
			if (a->arr[i].name == name)
				cout << "����:" << a->arr[i].name << " �Ա�:" << (a->arr[i].sex == 1 ? "��" : "Ů") << " ����:" << a->arr[i].age << " �绰:" << a->arr[i].tel << " סַ:" << a->arr[i].addr << endl;
		}
	}
	else
		cout << "���޴��ˣ�" << endl;
	system("pause");
	system("cls");
}
void changef(address* a)
{
	cout << "��������Ҫ�޸���Ϣ����ϵ��������" << endl;
	string name;
	cin >> name;
	int ret = IsExist(a, name);
	if (ret != -1)
	{
		cout << "������������" << endl;
		cin >> a->arr[ret].name;
		cout << "�������Ա�" << endl;
		cout << "1---��" << endl;
		cout << "2---Ů" << endl;
	
		while (true)
		{
			cin >> a->arr[ret].sex;
			if (a->arr[ret].sex == 1 || a->arr[ret].sex == 2)
				break;
			else
				cout << "�����������������룡" << endl;
		}
		cout << "���������䣺" << endl;
		cin >> a->arr[ret].age;
		cout << "������绰��" << endl;
		cin >> a->arr[ret].tel;
		cout << "������סַ��" << endl;
		cin >> a->arr[ret].addr;
		cout << "�޸ĳɹ�" << endl;
	}
	else
		cout << "���޴��ˣ�" << endl;
	system("pause");
	system("cls");
}
void clear(address* a)
{
	a->fnum = 0;
	cout << "ͨѶ¼�Ѿ���գ�" << endl;
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
		cout << "��������Ҫɾ������ϵ��������" << endl;
		string name;
		cin >> name;
		if (IsExist(a, name) == -1)
			cout << "���޴��ˣ�" << endl;
		else
			cout << "�ҵ����ˣ�" << endl;
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
			cout << "���Ѿ��˳�ϵͳ,��ӭ�´�ʹ��" << endl;
			system("pause");
			return 0;
			break;
		}
	}
}