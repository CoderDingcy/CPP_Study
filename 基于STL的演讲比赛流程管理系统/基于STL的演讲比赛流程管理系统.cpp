#include<iostream>
#include<ctime>
using namespace std;
#include"speechManager.h"


int main()
{
	

	srand((unsigned int)time(NULL));
	speechManager sm;

	//���Դ�����ѡ��
	//for (map<int, Speaker>::iterator it = sm.m_Speaker.begin(); it != sm.m_Speaker.end(); it++)
	//{
	//	cout << "ѡ�ֱ�ţ�" << (*it).first << "\tѡ��������" << (*it).second.m_Name <<"\tѡ�ַ�����"<<(*it).second.m_Score[0]<< endl;
	//}

	int choice = 0;
	while (true)
	{
		sm.showMenu();
		cout << "����������ѡ��" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1://��ʼ����
			sm.startSpeech();
			break;
		case 2://�鿴����ı�����¼
			sm.showRecord();
			break;
		case 3://��ձ�����¼
			sm.clearRecord();
			break;
		case 0://�˳�ϵͳ
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