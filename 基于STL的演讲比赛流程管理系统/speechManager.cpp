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
	cout << "*************  ��ӭ�μ��ݽ����� ************" << endl;
	cout << "*************  1.��ʼ�ݽ�����  *************" << endl;
	cout << "*************  2.�鿴�����¼  *************" << endl;
	cout << "*************  3.��ձ�����¼  *************" << endl;
	cout << "*************  0.�˳���������  *************" << endl;
	cout << "********************************************" << endl;
	cout << endl;
}

void speechManager::exitSystem()
{
	cout << "��ӭ�´�ʹ�ã�" << endl;
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
		string name = "ѡ��";
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
	//��һ�ֱ���ʵ��

	//��ǩ
	speechDraw();

	//����
	speechContest();
	//��ʾ�������
	showScore();


	//�ڶ��ֱ���
	m_Index++;
	//��ǩ
	speechDraw();
	//����
	speechContest();
	//��ʾ���ս��
	showScore();
	//�������
	saveRecord();
	cout << "�����������" << endl;

	//���ñ���
	initSpeech();
	createSpeaker();
	loadRecord();
	system("pause");
	system("cls");
}
void speechManager::speechDraw()
{
	cout << "��<<" << this->m_Index << ">>�ֱ������ڳ�ǩ" << endl;
	cout << "-----------------------------------" << endl;
	cout << "��ǩ˳�����£�" << endl;
	if (this->m_Index == 1)
	{
		//��һ�ֱ���
		random_shuffle(v1.begin(), v1.end());
		for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
		{
			cout << *it << " ";
		}
		cout << endl;
	}
	else
	{
		//�ڶ��ֱ���
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
	cout << "------------- ��<<" << this->m_Index << ">>����ʽ������ʼ��------------- " << endl;
	
	int num = 0;//��¼��Ա�� 6��һ��

	multimap<double,int,greater<double>> groupScore;//��ʱ����

	vector<int> v_Src;//������Ա������
	if (this->m_Index == 1)
		v_Src = v1;
	else
		v_Src = v2;

	for(vector<int>::iterator it=v_Src.begin();it!=v_Src.end();it++)
	{
		num++;
		//��ί���
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
		//6��һ�� ����ʱ��������
		groupScore.insert(make_pair(ave,*it));
		if (num % 6 == 0)
		{
			cout << "��<<" << num / 6 << ">>��С��������Σ�" << endl;
			for (multimap<double, int, greater<double>>::iterator it = groupScore.begin(); it != groupScore.end(); it++)
			{
				cout << "��ţ�" << it->second << "  ������" << this->m_Speaker[it->second].m_Name << "  �ɼ���" << this->m_Speaker[it->second].m_Score[m_Index-1] << endl;
			}

			int count = 0;
			for (multimap<double, int, greater<double>>::iterator it = groupScore.begin(); it != groupScore.end()&&count<3; it++,count++)
			{
				if (this->m_Index == 1)
					v2.push_back(it->second);
				else
					vVctory.push_back(it->second);
			}
			groupScore.clear();//�������
			cout << endl;
		}


	}
	cout << "------------- ��<<" << this->m_Index << ">>�ֱ������  ------------- " << endl;
	system("pause");
}

void speechManager::showScore()
{
	cout << "---------��<<" << this->m_Index << ">>�ֽ���ѡ����Ϣ���£�-----------" << endl;
	vector<int> v;
	if (this->m_Index == 1)
		v = v2;
	else
		v = vVctory;
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "ѡ�ֱ�ţ�" << *it << "  ������" << m_Speaker[*it].m_Name << "  ������" << m_Speaker[*it].m_Score[m_Index - 1] << endl;

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
	cout << "��¼�ѱ���" << endl;
	fileIsEmpty = false;
}

void speechManager::loadRecord()
{
	ifstream ifs("speech.csv", ios::in);//���ļ�
	if (!ifs.is_open())
	{
		//cout << "�ļ���ʧ��" << endl;
		fileIsEmpty = true;
		ifs.close();
		return;
	}

	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		//cout << "�ļ�Ϊ��" << endl;
		this->fileIsEmpty = true;
		ifs.close();
		return;
	}

	//�ļ���Ϊ��
	fileIsEmpty = false;

	ifs.putback(ch); //�������ȡ�ĵ����ַ��ٷŻ���

	int index = 0;
	string data;
	while (ifs >> data)
	{
		//��ŷֺõ��ַ���
		vector<string> v;
		//cout << data << endl;
		int pos = -1;//�鵽���ŵ�λ��
		int start = 0;

		while (true)
		{
			pos = data.find(",", start);
			if (pos == -1)
			{
				//û���ҵ����
				break;//�˳�ѭ��
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
		cout << "�ļ�Ϊ�ջ򲻴���" << endl;
	else
	{
		for (int i = 0; i < m_Record.size(); i++)
		{
			cout << "��" << i + 1 << "��" <<
				"�ھ���ţ�" << m_Record[i][0] << "�÷֣�" << m_Record[i][1] << " "
				"�Ǿ���ţ�" << m_Record[i][2] << "�÷֣�" << m_Record[i][3] << " "
				"������ţ�" << m_Record[i][4] << "�÷֣�" << m_Record[i][5] << endl;
		}
		
	}
	system("pause");
	system("cls");
}

void speechManager::clearRecord()
{
	cout << "ȷ�����?" << endl;
	cout << "1��ȷ��" << endl;
	cout << "2��ȡ��" << endl;

	int select = 0;
	cin >> select;
	
	if (select == 1)
	{
		ofstream ofs("speech.csv", ios::trunc);
		ofs.close();
		this->initSpeech();
		this->createSpeaker();
		this->loadRecord();
		cout << "��ճɹ���" << endl;
	}
	system("pause");
	system("cls");

}

speechManager::~speechManager()
{

}