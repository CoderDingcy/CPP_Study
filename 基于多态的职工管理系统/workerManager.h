#pragma once
#include<iostream>
#include"worker.h"
#include"employee.h"
#include"manager.h"
#include"boss.h"
#include<fstream>
using namespace std;
#define FILENAME "1.txt"
class workerManager
{
public:
	workerManager();

	//չʾ�˵�
	void Show_Menu();
	
	//����
	void sortw();

	//�˳�ϵͳ
	void exitSystem();

	//���ְ��
	void Add_worker();

	//����Ϊ�ļ�
	void save();

	//����ְ������
	int getwnum();

	//��ʼ��ְ��
	void Initw();

	//ɾ��ְ��
	void delw();

	//����ļ�
	void cleanf();

	//�޸�ְ��
	void modw();

	//����ְ��
	void findw();

	//ְ���Ƿ����
	int Isexist(int id);

	//��ʾְ��
	void showw();
	
	//��¼ְ������
	int m_wnum;

	//ְ��ָ������ָ�� 
	worker** m_warray;

	//����ļ��Ƿ�Ϊ��
	bool m_FileisEmpty;

	~workerManager();
};