#include<iostream>
#include<map>
using namespace std;

//mapÈİÆ÷ ÅÅĞò
class myCompare
{
public:
	bool operator()(int v1,int v2)const
	{
		return v1>v2;
	}
		
};

void test01()
{
	//´´½¨ÈİÆ÷
	map<int, int,myCompare> m;
	m.insert(pair<int, int>(1, 23));
	m.insert(pair<int, int>(5, 24));
	m.insert(pair<int, int>(3, 25));
	m.insert(pair<int, int>(4, 26));
	for (map<int, int,myCompare>::iterator it = m.begin(); it != m.end(); it++)
		cout << "key:" << it->first << " value:" << it->second << endl;


}

int main()
{
	test01();
	system("pause");
}