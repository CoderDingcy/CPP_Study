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

	//展示菜单
	void Show_Menu();
	
	//排序
	void sortw();

	//退出系统
	void exitSystem();

	//添加职工
	void Add_worker();

	//保存为文件
	void save();

	//返回职工个数
	int getwnum();

	//初始化职工
	void Initw();

	//删除职工
	void delw();

	//清楚文件
	void cleanf();

	//修改职工
	void modw();

	//查找职工
	void findw();

	//职工是否存在
	int Isexist(int id);

	//显示职工
	void showw();
	
	//记录职工个数
	int m_wnum;

	//职工指针数组指针 
	worker** m_warray;

	//标记文件是否为空
	bool m_FileisEmpty;

	~workerManager();
};