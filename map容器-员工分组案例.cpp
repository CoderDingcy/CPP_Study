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
* ��˾������Ƹ��10��Ա����ABCDEFGHIJ����10��Ա�����빫˾֮����Ҫָ��Ա�����Ǹ����Ź���
* Ա����Ϣ��: ����  ������ɣ����ŷ�Ϊ���߻����������з�
* �����10��Ա�����䲿�ź͹���
* ͨ��multimap������Ϣ�Ĳ���  key(���ű��) value(Ա��)
* �ֲ�����ʾԱ����Ϣ
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
		worker.m_Name = "Ա��";
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
	cout << "�߻����ţ�" << endl;
   multimap<int, Worker>::iterator pos = mp.find(CEHUA);
   int count = mp.count(CEHUA);
   int index = 0;
	   for (; pos != mp.end(), index < count; pos++, index++)
	   {
		   cout << pos->second.m_Name << "��нˮΪ��" << pos->second.m_Salary << endl;
	}
	   cout << "---------------" << endl;
	   cout << "�������ţ�" << endl;
	 count = mp.count(MEISHU)+count;
	   for (; pos != mp.end(), index < count; index++, pos++)
	   {
		   cout << pos->second.m_Name << "��нˮΪ��" << pos->second.m_Salary << endl;
	   }
	   cout << "---------------" << endl;
	   cout << "�з����ţ�" << endl;
	   count += mp.count(YANFA);
	   for (; pos != mp.end(), index < count; index++, pos++)
	   {
		   cout << pos->second.m_Name << "��нˮΪ��" << pos->second.m_Salary << endl;
	   }
}

int main()
{
	srand((unsigned int)time(NULL));
	//����Ա��
	vector<Worker> vWorker;
	createWorker(vWorker);

	//Ա������
	multimap<int, Worker> mp;
	setGroup(vWorker,mp);

	//��ӡԱ��
	ShowWorkerByGroup(mp);
	system("pause");
}