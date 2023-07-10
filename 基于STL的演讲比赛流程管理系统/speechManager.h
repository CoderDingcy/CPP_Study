#pragma once
#include<iostream>
#include<vector>
#include<map>
#include<string>
#include"speaker.h"
using namespace std;

//演讲比赛管理类
class speechManager
{
public:
	speechManager();

	void showMenu();

	void exitSystem();

	//初始化容器和属性
	void initSpeech();

	//创建选手
	void createSpeaker();

	//开始比赛
	void startSpeech();

	//抽签
	void speechDraw();

	//比赛
	void speechContest();

	//显示分数
	void showScore();

	//保存记录
	void saveRecord();

	//导入记录
	void loadRecord();

	//展示往届记录
	void showRecord();

	//清空记录
	void clearRecord();

	~speechManager();

	//成员属性
	//比赛选手容器 12人
	vector<int> v1;

	//第一轮晋级容器 6人
	vector<int> v2;

	//胜利前三名容器 3人
	vector<int> vVctory;

	//存放编号以及对应的具体选手的容器
	map<int, Speaker> m_Speaker;

	//记录比赛轮数
	int m_Index;

	//判断文件是否为空的标志
	bool fileIsEmpty;

	//存放往届记录的容器
	map<int, vector<string>>m_Record;
};

