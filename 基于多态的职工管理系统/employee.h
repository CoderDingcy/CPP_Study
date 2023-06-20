#pragma once
#include<iostream>
#include<string>
#include"worker.h"
using namespace std;

class employee:public worker
{
public:
	employee(int id, string name, int did);

	void showInfo();//显示个人信息

	string getDeptName();//获得岗位名称

};