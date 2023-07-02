#include<iostream>
#include<map>
using namespace std;

//map容器 插入和删除
void myPrint(map<int, int>& m)
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
		cout << "key:" << it->first << "\tvalue:" << it->second << endl;
}


void test01()
{
	map<int, int> m;
	//插入
	//第一种
	m.insert(pair<int, int>(1, 23));
	m.insert(pair<int, int>(5, 24));
	m.insert(pair<int, int>(3, 25));
	m.insert(pair<int, int>(4, 26));
	
    //第二种
	m.insert(make_pair(10, 10));

	//第三种
	m.insert(map<int, int>::value_type(100, 100));

	//第四种 不建议使用
	m[4] = 400;
	//m[5]; 即使容器中没有key=5 但是这条语句会自己创建key=5 并且使相对应的value=0



	//删除
	m.erase(m.begin());
	//m.erase(m.begin(), m.end());
	m.erase(3);
	m.clear();
	myPrint(m);
}

int main()
{
	test01();
	system("pause");
}