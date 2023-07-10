#include<iostream>
#include<ctime>
using namespace std;
#include"speechManager.h"


int main()
{
	

	srand((unsigned int)time(NULL));
	speechManager sm;

	//测试创建的选手
	//for (map<int, Speaker>::iterator it = sm.m_Speaker.begin(); it != sm.m_Speaker.end(); it++)
	//{
	//	cout << "选手编号：" << (*it).first << "\t选手姓名：" << (*it).second.m_Name <<"\t选手分数："<<(*it).second.m_Score[0]<< endl;
	//}

	int choice = 0;
	while (true)
	{
		sm.showMenu();
		cout << "请输入您的选择：" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1://开始比赛
			sm.startSpeech();
			break;
		case 2://查看往届的比赛记录
			sm.showRecord();
			break;
		case 3://清空比赛记录
			sm.clearRecord();
			break;
		case 0://退出系统
			sm.exitSystem();
			break;
		default:
			system("cls");
			break;
		}
	}
	system("pause");
	return 0;
}