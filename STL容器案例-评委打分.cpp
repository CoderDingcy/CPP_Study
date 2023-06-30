#include<iostream>
using namespace std;
#include<vector>
#include<deque>
#include<string>
#include<algorithm>
#include<ctime>
/* 实现步骤:
1. 创建五名选手，放到vector中
2. 遍历vector容器，取出来每一个选手，执行for循环，可以把10个评分打分存到deque容器中
3. sort算法对deque容器中分数排序，去除最高和最低分
4. deque容器遍历一遍，累加总分
5. 获取平均分
*/

//选手类
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
		string name = "选手";
		name += nameseed[i];
		int score = 0;
		Person p(name, score);
		//将创建的Person对象放入到容器中
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
		cout<<v[i].m_Name <<"平均分为：" << v[i].m_Score<<endl;
}
	
}

int main()
{
	srand((unsigned int)time(NULL));
    //创建五名选手
	vector<Person> v;//存放选手的容器
	createPerson(v);

	//评委打分
	setScore(v);

	//显示得分
	showScore(v);
	system("pause");
}