#include<iostream>
#include<set>
using namespace std;

//setÈİÆ÷µÄ²åÈëºÍÉ¾³ı
void myPrint(const set<int>& s)
{
	for (set<int>::const_iterator it = s.begin(); it != s.end(); it++)
		cout << *it << " ";
	cout << endl;
}

void test01()
{
	set<int> s1;
	s1.insert(10);
	s1.insert(30);
	s1.insert(40);
	s1.insert(20);
	myPrint(s1);

	//É¾³ı
	s1.erase(s1.begin());
	myPrint(s1);

	//É¾³ıÖØÔØ°æ±¾
	s1.erase(40);
	myPrint(s1);

	//Çå¿Õ
	s1.clear();
	myPrint(s1);
}

int main()
{
	test01();
	system("pause");
}