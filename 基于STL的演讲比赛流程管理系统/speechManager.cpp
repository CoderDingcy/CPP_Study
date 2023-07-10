#include "speechManager.h"
#include<algorithm>
#include<deque>
#include<numeric>
#include<fstream>

speechManager::speechManager()
{
	initSpeech();
	createSpeaker();
	loadRecord();
}

void speechManager::showMenu()
{
	cout << "********************************************" << endl;
	cout << "*************  欢迎参加演讲比赛 ************" << endl;
	cout << "*************  1.开始演讲比赛  *************" << endl;
	cout << "*************  2.查看往届记录  *************" << endl;
	cout << "*************  3.清空比赛记录  *************" << endl;
	cout << "*************  0.退出比赛程序  *************" << endl;
	cout << "********************************************" << endl;
	cout << endl;
}

void speechManager::exitSystem()
{
	cout << "欢迎下次使用！" << endl;
	system("pause");
	exit(0);
}

void speechManager::initSpeech()
{
	 this->v1.clear();
	 this->v2.clear();
	 this->m_Index = 1;
	 this->vVctory.clear();
	 this->m_Speaker.clear();
	 m_Record.clear();
}

void speechManager::createSpeaker()
{
	string nameseeds = "ABCDEFGHIJKL";
	
	for (int i = 0; i < nameseeds.size(); i++)
	{
		string name = "选手";
		name += nameseeds[i];
		Speaker sp;
		sp.m_Name = name;

		for (int j = 0; j < 2; j++)
		{
			sp.m_Score[j] = 0;
		}
		this->v1.push_back(i + 10001);
		this->m_Speaker.insert(make_pair(i + 10001,sp));
	}
}

void speechManager::startSpeech()
{
	//第一轮比赛实现

	//抽签
	speechDraw();

	//比赛
	speechContest();
	//显示晋级结果
	showScore();


	//第二轮比赛
	m_Index++;
	//抽签
	speechDraw();
	//比赛
	speechContest();
	//显示最终结果
	showScore();
	//保存分数
	saveRecord();
	cout << "本届比赛结束" << endl;

	//重置比赛
	initSpeech();
	createSpeaker();
	loadRecord();
	system("pause");
	system("cls");
}
void speechManager::speechDraw()
{
	cout << "第<<" << this->m_Index << ">>轮比赛正在抽签" << endl;
	cout << "-----------------------------------" << endl;
	cout << "抽签顺序如下：" << endl;
	if (this->m_Index == 1)
	{
		//第一轮比赛
		random_shuffle(v1.begin(), v1.end());
		for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
		{
			cout << *it << " ";
		}
		cout << endl;
	}
	else
	{
		//第二轮比赛
		random_shuffle(v2.begin(), v2.end());
		for (vector<int>::iterator it = v2.begin(); it != v2.end(); it++)
		{
			cout << *it << endl;
		}
		cout << endl;
	}
	cout << "-----------------------------------" << endl;
	system("pause");
	cout << endl;
}

void speechManager::speechContest()
{
	cout << "------------- 第<<" << this->m_Index << ">>轮正式比赛开始：------------- " << endl;
	
	int num = 0;//记录人员数 6人一组

	multimap<double,int,greater<double>> groupScore;//临时容器

	vector<int> v_Src;//比赛人员的容器
	if (this->m_Index == 1)
		v_Src = v1;
	else
		v_Src = v2;

	for(vector<int>::iterator it=v_Src.begin();it!=v_Src.end();it++)
	{
		num++;
		//评委打分
		deque<double> d;
		for (int i = 0; i < 10; i++)
		{
			//cout << (rand() % 401 + 600) / 10.f << " ";
			d.push_back((rand() % 401 + 600) / 10.f);

		}
		/*cout << endl;*/
		sort(d.begin(), d.end(), greater<double>());
		d.pop_back();
		d.pop_front();

		double sum = accumulate(d.begin(), d.end(), 0.0f);
		double ave = sum / (double)d.size();

		this->m_Speaker[*it].m_Score[this->m_Index-1] = ave;
		//6人一组 用临时容器保存
		groupScore.insert(make_pair(ave,*it));
		if (num % 6 == 0)
		{
			cout << "第<<" << num / 6 << ">>个小组比赛名次：" << endl;
			for (multimap<double, int, greater<double>>::iterator it = groupScore.begin(); it != groupScore.end(); it++)
			{
				cout << "编号：" << it->second << "  姓名：" << this->m_Speaker[it->second].m_Name << "  成绩：" << this->m_Speaker[it->second].m_Score[m_Index-1] << endl;
			}

			int count = 0;
			for (multimap<double, int, greater<double>>::iterator it = groupScore.begin(); it != groupScore.end()&&count<3; it++,count++)
			{
				if (this->m_Index == 1)
					v2.push_back(it->second);
				else
					vVctory.push_back(it->second);
			}
			groupScore.clear();//清空容器
			cout << endl;
		}


	}
	cout << "------------- 第<<" << this->m_Index << ">>轮比赛完毕  ------------- " << endl;
	system("pause");
}

void speechManager::showScore()
{
	cout << "---------第<<" << this->m_Index << ">>轮晋级选手信息如下：-----------" << endl;
	vector<int> v;
	if (this->m_Index == 1)
		v = v2;
	else
		v = vVctory;
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "选手编号：" << *it << "  姓名：" << m_Speaker[*it].m_Name << "  分数：" << m_Speaker[*it].m_Score[m_Index - 1] << endl;

	}
	cout << endl;
	system("pause");
	system("cls");
	this->showMenu();
}

void speechManager::saveRecord()
{
	ofstream ofs;
	ofs.open("speech.csv",ios::out | ios::app);
	for (vector<int>::iterator it = vVctory.begin(); it != vVctory.end(); it++)
	{
		ofs << *it << "," << m_Speaker[*it].m_Score[1] << ",";
	}
	ofs << endl;
	ofs.close();
	cout << "记录已保存" << endl;
	fileIsEmpty = false;
}

void speechManager::loadRecord()
{
	ifstream ifs("speech.csv", ios::in);//读文件
	if (!ifs.is_open())
	{
		//cout << "文件打开失败" << endl;
		fileIsEmpty = true;
		ifs.close();
		return;
	}

	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		//cout << "文件为空" << endl;
		this->fileIsEmpty = true;
		ifs.close();
		return;
	}

	//文件不为空
	fileIsEmpty = false;

	ifs.putback(ch); //将上面读取的单个字符再放回来

	int index = 0;
	string data;
	while (ifs >> data)
	{
		//存放分好的字符串
		vector<string> v;
		//cout << data << endl;
		int pos = -1;//查到逗号的位置
		int start = 0;

		while (true)
		{
			pos = data.find(",", start);
			if (pos == -1)
			{
				//没有找到情况
				break;//退出循环
			}
			string temp = data.substr(start, pos - start);
			v.push_back(temp);
			start = pos + 1;
		}
		this->m_Record.insert(make_pair(index, v));
		index++;
	}
	ifs.close();
}

void speechManager::showRecord()
{
	if (fileIsEmpty)
		cout << "文件为空或不存在" << endl;
	else
	{
		for (int i = 0; i < m_Record.size(); i++)
		{
			cout << "第" << i + 1 << "届" <<
				"冠军编号：" << m_Record[i][0] << "得分：" << m_Record[i][1] << " "
				"亚军编号：" << m_Record[i][2] << "得分：" << m_Record[i][3] << " "
				"季军编号：" << m_Record[i][4] << "得分：" << m_Record[i][5] << endl;
		}
		
	}
	system("pause");
	system("cls");
}

void speechManager::clearRecord()
{
	cout << "确认清空?" << endl;
	cout << "1、确认" << endl;
	cout << "2、取消" << endl;

	int select = 0;
	cin >> select;
	
	if (select == 1)
	{
		ofstream ofs("speech.csv", ios::trunc);
		ofs.close();
		this->initSpeech();
		this->createSpeaker();
		this->loadRecord();
		cout << "清空成功！" << endl;
	}
	system("pause");
	system("cls");

}

speechManager::~speechManager()
{

}