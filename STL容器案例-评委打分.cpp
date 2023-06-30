#include<iostream>
using namespace std;
#include<vector>
#include<deque>
#include<string>
#include<algorithm>
#include<ctime>
/* ʵ�ֲ���:
1. ��������ѡ�֣��ŵ�vector��
2. ����vector������ȡ����ÿһ��ѡ�֣�ִ��forѭ�������԰�10�����ִ�ִ浽deque������
3. sort�㷨��deque�����з�������ȥ����ߺ���ͷ�
4. deque��������һ�飬�ۼ��ܷ�
5. ��ȡƽ����
*/

//ѡ����
class Person
{
public:
	Person(string name,int score)
	{
		m_Score = score;
		m_Name = name;
	}
	int m_Score;
	string m_Name;
};

void createPerson(vector<Person>& v)
{
	string nameseed = "ABCDE";
	for (int i = 0; i < 5; i++)
	{
		string name = "ѡ��";
		name += nameseed[i];
		int score = 0;
		Person p(name, score);
		//��������Person������뵽������
		v.push_back(p);
	}
}

void setScore(vector<Person>& v)
{
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		deque<int> d;
		for (int i = 0; i < 10; i++)
		{
			int score = rand() % 41 + 60;
			d.push_back(score);
		}
		sort(d.begin(), d.end());
		int sum = 0;
		d.pop_back();
		d.pop_front();
		for (int i = 0; i < d.size(); i++)
			sum += d[i];
		it->m_Score = sum / d.size();
	}


}

void showScore(vector<Person>& v)
{
	for (int i = 0; i < v.size(); i++)
	{
		cout<<v[i].m_Name <<"ƽ����Ϊ��" << v[i].m_Score<<endl;
}
	
}

int main()
{
	srand((unsigned int)time(NULL));
    //��������ѡ��
	vector<Person> v;//���ѡ�ֵ�����
	createPerson(v);

	//��ί���
	setScore(v);

	//��ʾ�÷�
	showScore(v);
	system("pause");
}