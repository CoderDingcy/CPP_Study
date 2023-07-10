#pragma once
#include<iostream>
#include<vector>
#include<map>
#include<string>
#include"speaker.h"
using namespace std;

//�ݽ�����������
class speechManager
{
public:
	speechManager();

	void showMenu();

	void exitSystem();

	//��ʼ������������
	void initSpeech();

	//����ѡ��
	void createSpeaker();

	//��ʼ����
	void startSpeech();

	//��ǩ
	void speechDraw();

	//����
	void speechContest();

	//��ʾ����
	void showScore();

	//�����¼
	void saveRecord();

	//�����¼
	void loadRecord();

	//չʾ�����¼
	void showRecord();

	//��ռ�¼
	void clearRecord();

	~speechManager();

	//��Ա����
	//����ѡ������ 12��
	vector<int> v1;

	//��һ�ֽ������� 6��
	vector<int> v2;

	//ʤ��ǰ�������� 3��
	vector<int> vVctory;

	//��ű���Լ���Ӧ�ľ���ѡ�ֵ�����
	map<int, Speaker> m_Speaker;

	//��¼��������
	int m_Index;

	//�ж��ļ��Ƿ�Ϊ�յı�־
	bool fileIsEmpty;

	//��������¼������
	map<int, vector<string>>m_Record;
};

