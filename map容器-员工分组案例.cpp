#include<iostream>
using namespace std;
#include<vector>
#include<ctime>
#include<string>
#include<map>
#define CEHUA 0
#define MEISHU 1
#define YANFA 2
/*
* 公司今天招聘了10个员工（ABCDEFGHIJ），10名员工进入公司之后，需要指派员工在那个部门工作
* 员工信息有: 姓名  工资组成；部门分为：策划、美术、研发
* 随机给10名员工分配部门和工资
* 通过multimap进行信息的插入  key(部门编号) value(员工)
* 分部门显示员工信息
*/

class Worker
{
public:
	int m_Salary;
	string m_Name;
};

void createWorker(vector<Worker>& v)
{
	string str = "ABCDEFGHIJ";
	for (int i = 0; i < 10; i++)
	{
		Worker worker;
		worker.m_Name = "员工";
		worker.m_Name +=str[i];
		worker.m_Salary = rand() % 10000 + 10000;
		v.push_back(worker);
	}

}

void setGroup(vector<Worker>& v,multimap<int, Worker>& mp)
{
	for (vector<Worker>::iterator it = v.begin(); it != v.end(); it++)
	{
		int deptId = rand() % 3;
		mp.insert(make_pair(deptId, *it));
}
}

void ShowWorkerByGroup(multimap<int,Worker>& mp)
{
	cout << "策划部门：" << endl;
   multimap<int, Worker>::iterator pos = mp.find(CEHUA);
   int count = mp.count(CEHUA);
   int index = 0;
	   for (; pos != mp.end(), index < count; pos++, index++)
	   {
		   cout << pos->second.m_Name << "的薪水为：" << pos->second.m_Salary << endl;
	}
	   cout << "---------------" << endl;
	   cout << "美术部门：" << endl;
	 count = mp.count(MEISHU)+count;
	   for (; pos != mp.end(), index < count; index++, pos++)
	   {
		   cout << pos->second.m_Name << "的薪水为：" << pos->second.m_Salary << endl;
	   }
	   cout << "---------------" << endl;
	   cout << "研发部门：" << endl;
	   count += mp.count(YANFA);
	   for (; pos != mp.end(), index < count; index++, pos++)
	   {
		   cout << pos->second.m_Name << "的薪水为：" << pos->second.m_Salary << endl;
	   }
}

int main()
{
	srand((unsigned int)time(NULL));
	//创建员工
	vector<Worker> vWorker;
	createWorker(vWorker);

	//员工分组
	multimap<int, Worker> mp;
	setGroup(vWorker,mp);

	//打印员工
	ShowWorkerByGroup(mp);
	system("pause");
}