#include<iostream>
using namespace std;
#include<string>

//×Ö·û´®²åÈëºÍÉ¾³ı
void test01()
{
	string str = "Hello";
	//²åÈë
	str.insert(1, "111");

	cout << str<<endl;
    //É¾³ı
	str.erase(1, 3);
	cout << str<<endl;
}
int main()
{
	test01();
	system("pause");
}