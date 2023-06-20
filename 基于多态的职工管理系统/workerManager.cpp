#include"workerManager.h"
workerManager::workerManager()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);
	//1、文件不存在
	if (!ifs.is_open())
	{
		cout << "文件不存在！" << endl;
		m_warray = NULL;
		m_wnum = 0;
		m_FileisEmpty = true;
		ifs.close();
		return;
	}
    //2、文件存在但是为空文件
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		cout << "文件为空！" << endl;
		m_warray = NULL;
		m_wnum = 0;
		m_FileisEmpty = true;
		ifs.close();
		return;
	}

	//3、文件存在并且记录数据
	int num = getwnum();
	cout << "职工人数：" << num << endl;
	m_wnum = num;

	//开辟空间
	m_warray = new worker * [m_wnum];
	Initw();
	//测试代码
	for (int i = 0; i <m_wnum; i++)
	{
		cout << "职工号： " << m_warray[i]->m_id
			<< " 职工姓名： " <<m_warray[i]->m_name
			<< " 部门编号： " <<m_warray[i]->m_deptid << endl;
	}
}

void workerManager::cleanf()
{
	cout << "确定清空吗？" << endl;
	cout << "1、确定" << endl;
	cout << "2、返回" << endl;
	int select = 0;
	cin >> select;
	if (select == 1)
	{
		ofstream ofs;
		//约等于清空文件
		ofs.open(FILENAME, ios::trunc);//删除文件后重新创建
		ofs.close();
		if (m_warray != NULL)
		{//删除堆区的职工对象
			for (int i = 0; i < m_wnum; i++)
			{
				delete m_warray[i];
			}
			//删除堆区数组指针
			delete [] m_warray;
			m_warray = NULL;
			m_wnum = 0;
			m_FileisEmpty = true;
		}
		cout << "清空成功！" << endl;
	}
	system("pause");
	system("cls"); 
}

void workerManager::showw()
{
	if (m_FileisEmpty == true)
		cout << "文件不存在或记录为空!" << endl;
	else
	{
		for (int i = 0; i < m_wnum; i++)
		{
			m_warray[i]->showInfo();
		}
	}
	system("pause");
	system("cls");
}
void workerManager::findw()
{
	if (m_FileisEmpty)
	{
		cout << "文件不存在或记录为空！" << endl;
	}
	else
	{
		cout << "请选择查找的方式：" << endl;
		cout << "1、按职工编号查找" << endl;
		cout << "2、按职工姓名查找" << endl;
		int num = 0;
		cin >> num;
		if (num == 1)
		{
			cout << "请输入职工编号：" << endl;
			int id = 0;
			cin >> id;
			int index = Isexist(id);
			if (index != -1)
			{
				cout << "查找成功，职工信息如下：" << endl;
				m_warray[index]->showInfo();
			}
			else
			{
				cout << "查无此人！" << endl;
			}
		}
		else if (num == 2)
		{
			string name;
			int index = 0;
			cout << "请输入查找的姓名：" << endl;
			cin >> name;
			bool flag = false;
			for (int i = 0; i < m_wnum; i++)
			{
				if (m_warray[i]->m_name == name)
				{
					index = i;
					cout << "查找成功，信息如下：" << endl;
					m_warray[index]->showInfo();
					flag = true;
				}
			}
			if (flag == false)
				cout << "查无此人！" << endl;
		}
		else
			cout << "输入错误！" << endl; 

	}
	system("pause");
	system("cls");
}

void workerManager::sortw()
{
	if (m_FileisEmpty)
		cout << "文件不存在或记录为空" << endl;
	else
	{
		cout << "请选择排序方式：" << endl;
		cout << "1、按升序排序" << endl;
		cout << "2、按降序排序" << endl;
		int select = 0;
		cin >> select;
		for (int i = 0; i < m_wnum; i++)
		{
			int minormax=i;
			for (int j = i + 1; j < m_wnum; j++)
			{
				if (select == 1)
				{
					if (m_warray[minormax]->m_id > m_warray[j]->m_id)
					{
						minormax = j;
					}
				}
				else
				{
					if (m_warray[minormax]->m_id < m_warray[j]->m_id)
					{
						minormax = j;
					}
				}
			}
			if (minormax != i)
			{
				worker* temp = m_warray[i];
				m_warray[i] = m_warray[minormax];
				m_warray[minormax] = temp;
			}

		}
		cout << "排序成功，排序后结果为" << endl;
		save();
		showw();
	}
	
}

void workerManager::delw()
{
	if (m_FileisEmpty)
	{
		cout << "文件不存在或记录为空" << endl;
	}
	else
	{
		cout << "请输入想要删除的职工的编号：" << endl;
		int id = 0;
		cin >> id;
		if (Isexist(id) != -1)
		{
			for (int i = Isexist(id); i <m_wnum-1 ; i++)
			{
				m_warray[i] = m_warray[i+1];
			}
			m_wnum--;
			save();
			cout << "删除成功！" << endl;
			if (m_wnum == 0)
			{
				m_FileisEmpty = true;
				cout << "刚刚删除的是最后一组职工信息！" << endl;
			}
		}
		else
			cout << "删除失败，职工不存在！" << endl;
	}
	
	system("pause");
	system("cls");
}

void workerManager::modw()
{
	if (m_FileisEmpty)
		cout << "文件不存在或记录为空！" << endl;
	else
	{
		cout << "请输入修改职工的编号：" << endl;
		int id;
		cin >> id;
		int index = Isexist(id);
		if (index != -1)
		{
			//找到职工
			delete m_warray[index];
			int newid = 0;
			string newname = " ";
			int newdid=0;
			cout << "查到职工号为" << id << "的职工，请输入要修改的新职工号：" << endl;
			cin >> newid;
			cout << "请输入新的姓名：" << endl;
			cin >> newname;
			cout << "请输入岗位：" << endl;
			cout << "1、普通职工" << endl;
			cout << "2、经理" << endl;
			cout << "3、老板" << endl;
			cin >> newdid;
			worker* w = NULL;
			switch (newdid)
			{
			case 1:
				w = new employee(newid, newname, newdid);
				break;
			case 2:
				w = new manager(newid, newname, newdid);
				break;
			case 3:
				w = new boss(newid, newname, newdid);
				break;
			default:
				break;
			}
			m_warray[index] = w;
			cout << "修改成功！" << endl;
			save();
		}
		else
		{
			cout << "修改失败，职工不存在！" << endl;
		}
	}
	system("pause");
	system("cls");
}

int workerManager::Isexist(int id)
{
	int index=-1;
	for (int i = 0; i < m_wnum; i++)
	{
		if (id == m_warray[i]->m_id)
		{
			index = i;
			break; 
		}
}
	return index;
}

void workerManager::Initw()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);
	int id;
	string name;
	int did;
	int index = 0;
	while (ifs >> id && ifs >> name && ifs >> did)
	{
		worker* w = NULL;
		if (did == 1)
		{
			w = new employee(id, name, did);
		}
		else if (did == 2)
		{
			w = new manager(id, name, did);
		}
		else
		{
			w = new boss(id, name, did);
		}
		m_warray[index++] = w;
	}
}

int workerManager::getwnum()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);
	int id;
	string name;
	int did;
	int num = 0;
	while (ifs >> id && ifs >> name && ifs >> did)
	{
		num++;//记录人数
	}
	ifs.close();
	return num;
}

workerManager::~workerManager()
{
	if (m_warray != NULL)
	{
		delete[] m_warray;
		m_warray = NULL;
	}
}

void workerManager::save()
{
	ofstream ofs;
	ofs.open(FILENAME, ios::out);
	for (int i = 0; i < m_wnum; i++)
	{
		ofs <<this->m_warray[i]->m_id << " "
			<<this->m_warray[i]->m_name << " " 
			<<this->m_warray[i]->m_deptid << endl;
	}
	ofs.close();
}

void workerManager::Add_worker()
{
	cout << "请输入要添加的职工数量：" << endl;
	int addnum=0;//记录添加数量
	cin >> addnum;
	if (addnum > 0)
	{
		//添加
		//计算需要添加的空间的大小
		int newsize = m_wnum + addnum;
		//开辟新空间
		worker** newspace = new worker * [newsize];
		//将原来空间的数据拷贝到新空间
		if (m_warray != NULL)
		{
			for (int i = 0; i < m_wnum ; i++)
			{
				newspace[i] = m_warray[i];
			}
		}
		//批量添加新数据
		for (int i = 0; i < addnum; i++)
		{
			int id;//职工号
			string name;//职工姓名
			int idi;//岗位id号
			cout << "请输入第" << i + 1 << "个新职工的编号：" << endl;
			cin >> id;
			cout << "请输入第" << i + 1 << "个新职工的姓名：" << endl;
			cin >> name;
			cout << "请选择该职工岗位：" << endl;
			cout << "1、普通职工" << endl;
			cout << "2、经理" << endl;
			cout << "3、老板" << endl;
			cin >> idi;

			worker* w = NULL;
			switch (idi)
			{
			case 1:
				w = new employee(id, name, 1);
				break;
			case 2:
				w = new manager(id, name, 2);
				break;
			case 3:
				w = new boss(id, name, 3);
				break;
			default:
				break;
			}
			newspace[i+(m_wnum)] = w;
		}
		//释放原有的空间
		delete [] m_warray;
		//更改新空间的指向
		m_warray = newspace;
		//更新新的职工人数
		m_wnum = newsize;
		//添加成功
		m_FileisEmpty = false;
		cout << "添加成功！" << endl;
		save();
	}
	else
	{
		cout << "添加失败，输入职工数量有误！" << endl;
		system("pause");
		system("cls");
	}
	system("pause");
	system("cls");
}

void workerManager:: Show_Menu()
{
	cout << "***********************************************" << endl;
	cout << "************  欢迎使用职工管理系统! ***********" << endl;
	cout << "*************** 0.退出管理程序 ****************" << endl;
	cout << "*************** 1.增加职工信息 ****************" << endl;
	cout << "*************** 2.显示职工信息 ****************" << endl;
	cout << "*************** 3.删除离职职工 ****************" << endl;
	cout << "*************** 4.修改职工信息 ****************" << endl;
	cout << "*************** 5.查找职工信息 ****************" << endl;
	cout << "*************** 6.按照编号排序 ****************" << endl;
	cout << "*************** 7.清空所有文档 ****************" << endl;
	cout << "***********************************************" << endl;
	cout << endl;
}

void workerManager::exitSystem()
{
	cout << "欢迎下次使用！" << endl;
	system("pause");
	exit(0);
}