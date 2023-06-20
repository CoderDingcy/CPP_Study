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
		cout << "请输入您的选择：" << endl;
		cin >> choice;
		switch (choice)
		{
		case 0://退出
			wm.exitSystem();
			break;
		case 1://添加
			wm.Add_worker();
			break;
		case 2://显示
			wm.showw();
			break;
		case 3://删除
			wm.delw();
			break;
		case 4://修改
			wm.modw();
			break;
		case 5://查找
			wm.findw();
			break;
		case 6://排序
			wm.sortw();
			break;
		case 7://清空文件
			wm.cleanf();
			break;
		default:
			system("cls");
		}
	}
	system("pause");
}