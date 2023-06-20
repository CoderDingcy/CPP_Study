#pragma once
#include<iostream>
#include"worker.h"
#include<string>

class boss :public worker
{
public:
	boss(int id, string name, int did);

	void showInfo();

	string getDeptName();
};