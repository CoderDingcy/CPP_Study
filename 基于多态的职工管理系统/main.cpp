#include<iostream>
#include"workerManager.h"
#include"worker.h"
#include"manager.h"
#include"employee.h"
#include"boss.h"
using namespace std;

int main()
{
	workerManager wm;
	int choice = 0;
	while (true)
	{
		wm.Show_Menu();
		cout << "����������ѡ��" << endl;
		cin >> choice;
		switch (choice)
		{
		case 0://�˳�
			wm.exitSystem();
			break;
		case 1://���
			wm.Add_worker();
			break;
		case 2://��ʾ
			wm.showw();
			break;
		case 3://ɾ��
			wm.delw();
			break;
		case 4://�޸�
			wm.modw();
			break;
		case 5://����
			wm.findw();
			break;
		case 6://����
			wm.sortw();
			break;
		case 7://����ļ�
			wm.cleanf();
			break;
		default:
			system("cls");
		}
	}
	system("pause");
}