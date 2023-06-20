#include"workerManager.h"
workerManager::workerManager()
{
	ifstream ifs;
	ifs.open(FILENAME, ios::in);
	//1���ļ�������
	if (!ifs.is_open())
	{
		cout << "�ļ������ڣ�" << endl;
		m_warray = NULL;
		m_wnum = 0;
		m_FileisEmpty = true;
		ifs.close();
		return;
	}
    //2���ļ����ڵ���Ϊ���ļ�
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		cout << "�ļ�Ϊ�գ�" << endl;
		m_warray = NULL;
		m_wnum = 0;
		m_FileisEmpty = true;
		ifs.close();
		return;
	}

	//3���ļ����ڲ��Ҽ�¼����
	int num = getwnum();
	cout << "ְ��������" << num << endl;
	m_wnum = num;

	//���ٿռ�
	m_warray = new worker * [m_wnum];
	Initw();
	//���Դ���
	for (int i = 0; i <m_wnum; i++)
	{
		cout << "ְ���ţ� " << m_warray[i]->m_id
			<< " ְ�������� " <<m_warray[i]->m_name
			<< " ���ű�ţ� " <<m_warray[i]->m_deptid << endl;
	}
}

void workerManager::cleanf()
{
	cout << "ȷ�������" << endl;
	cout << "1��ȷ��" << endl;
	cout << "2������" << endl;
	int select = 0;
	cin >> select;
	if (select == 1)
	{
		ofstream ofs;
		//Լ��������ļ�
		ofs.open(FILENAME, ios::trunc);//ɾ���ļ������´���
		ofs.close();
		if (m_warray != NULL)
		{//ɾ��������ְ������
			for (int i = 0; i < m_wnum; i++)
			{
				delete m_warray[i];
			}
			//ɾ����������ָ��
			delete [] m_warray;
			m_warray = NULL;
			m_wnum = 0;
			m_FileisEmpty = true;
		}
		cout << "��ճɹ���" << endl;
	}
	system("pause");
	system("cls"); 
}

void workerManager::showw()
{
	if (m_FileisEmpty == true)
		cout << "�ļ������ڻ��¼Ϊ��!" << endl;
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
		cout << "�ļ������ڻ��¼Ϊ�գ�" << endl;
	}
	else
	{
		cout << "��ѡ����ҵķ�ʽ��" << endl;
		cout << "1����ְ����Ų���" << endl;
		cout << "2����ְ����������" << endl;
		int num = 0;
		cin >> num;
		if (num == 1)
		{
			cout << "������ְ����ţ�" << endl;
			int id = 0;
			cin >> id;
			int index = Isexist(id);
			if (index != -1)
			{
				cout << "���ҳɹ���ְ����Ϣ���£�" << endl;
				m_warray[index]->showInfo();
			}
			else
			{
				cout << "���޴��ˣ�" << endl;
			}
		}
		else if (num == 2)
		{
			string name;
			int index = 0;
			cout << "��������ҵ�������" << endl;
			cin >> name;
			bool flag = false;
			for (int i = 0; i < m_wnum; i++)
			{
				if (m_warray[i]->m_name == name)
				{
					index = i;
					cout << "���ҳɹ�����Ϣ���£�" << endl;
					m_warray[index]->showInfo();
					flag = true;
				}
			}
			if (flag == false)
				cout << "���޴��ˣ�" << endl;
		}
		else
			cout << "�������" << endl; 

	}
	system("pause");
	system("cls");
}

void workerManager::sortw()
{
	if (m_FileisEmpty)
		cout << "�ļ������ڻ��¼Ϊ��" << endl;
	else
	{
		cout << "��ѡ������ʽ��" << endl;
		cout << "1������������" << endl;
		cout << "2������������" << endl;
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
		cout << "����ɹ����������Ϊ" << endl;
		save();
		showw();
	}
	
}

void workerManager::delw()
{
	if (m_FileisEmpty)
	{
		cout << "�ļ������ڻ��¼Ϊ��" << endl;
	}
	else
	{
		cout << "��������Ҫɾ����ְ���ı�ţ�" << endl;
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
			cout << "ɾ���ɹ���" << endl;
			if (m_wnum == 0)
			{
				m_FileisEmpty = true;
				cout << "�ո�ɾ���������һ��ְ����Ϣ��" << endl;
			}
		}
		else
			cout << "ɾ��ʧ�ܣ�ְ�������ڣ�" << endl;
	}
	
	system("pause");
	system("cls");
}

void workerManager::modw()
{
	if (m_FileisEmpty)
		cout << "�ļ������ڻ��¼Ϊ�գ�" << endl;
	else
	{
		cout << "�������޸�ְ���ı�ţ�" << endl;
		int id;
		cin >> id;
		int index = Isexist(id);
		if (index != -1)
		{
			//�ҵ�ְ��
			delete m_warray[index];
			int newid = 0;
			string newname = " ";
			int newdid=0;
			cout << "�鵽ְ����Ϊ" << id << "��ְ����������Ҫ�޸ĵ���ְ���ţ�" << endl;
			cin >> newid;
			cout << "�������µ�������" << endl;
			cin >> newname;
			cout << "�������λ��" << endl;
			cout << "1����ְͨ��" << endl;
			cout << "2������" << endl;
			cout << "3���ϰ�" << endl;
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
			cout << "�޸ĳɹ���" << endl;
			save();
		}
		else
		{
			cout << "�޸�ʧ�ܣ�ְ�������ڣ�" << endl;
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
		num++;//��¼����
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
	cout << "������Ҫ��ӵ�ְ��������" << endl;
	int addnum=0;//��¼�������
	cin >> addnum;
	if (addnum > 0)
	{
		//���
		//������Ҫ��ӵĿռ�Ĵ�С
		int newsize = m_wnum + addnum;
		//�����¿ռ�
		worker** newspace = new worker * [newsize];
		//��ԭ���ռ�����ݿ������¿ռ�
		if (m_warray != NULL)
		{
			for (int i = 0; i < m_wnum ; i++)
			{
				newspace[i] = m_warray[i];
			}
		}
		//�������������
		for (int i = 0; i < addnum; i++)
		{
			int id;//ְ����
			string name;//ְ������
			int idi;//��λid��
			cout << "�������" << i + 1 << "����ְ���ı�ţ�" << endl;
			cin >> id;
			cout << "�������" << i + 1 << "����ְ����������" << endl;
			cin >> name;
			cout << "��ѡ���ְ����λ��" << endl;
			cout << "1����ְͨ��" << endl;
			cout << "2������" << endl;
			cout << "3���ϰ�" << endl;
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
		//�ͷ�ԭ�еĿռ�
		delete [] m_warray;
		//�����¿ռ��ָ��
		m_warray = newspace;
		//�����µ�ְ������
		m_wnum = newsize;
		//��ӳɹ�
		m_FileisEmpty = false;
		cout << "��ӳɹ���" << endl;
		save();
	}
	else
	{
		cout << "���ʧ�ܣ�����ְ����������" << endl;
		system("pause");
		system("cls");
	}
	system("pause");
	system("cls");
}

void workerManager:: Show_Menu()
{
	cout << "***********************************************" << endl;
	cout << "************  ��ӭʹ��ְ������ϵͳ! ***********" << endl;
	cout << "*************** 0.�˳�������� ****************" << endl;
	cout << "*************** 1.����ְ����Ϣ ****************" << endl;
	cout << "*************** 2.��ʾְ����Ϣ ****************" << endl;
	cout << "*************** 3.ɾ����ְְ�� ****************" << endl;
	cout << "*************** 4.�޸�ְ����Ϣ ****************" << endl;
	cout << "*************** 5.����ְ����Ϣ ****************" << endl;
	cout << "*************** 6.���ձ������ ****************" << endl;
	cout << "*************** 7.��������ĵ� ****************" << endl;
	cout << "***********************************************" << endl;
	cout << endl;
}

void workerManager::exitSystem()
{
	cout << "��ӭ�´�ʹ�ã�" << endl;
	system("pause");
	exit(0);
}