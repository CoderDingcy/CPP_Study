#include<iostream>
#include<string>
using namespace std;

class Animal
{
public:
	Animal()
	{
		cout << "Animal构造函数调用" << endl;
	}
	virtual void speak() = 0;
	//virtual ~Animal()//解决子类属性空间释放不干净的问题
	//{
	//	cout << "Animal析构函数调用" << endl;
	//}
	//虚析构及纯虚析构只能有一个
	virtual ~Animal() = 0;//纯虚析构需要代码声明和实现 有了纯虚析构这个类也属于抽象类无法实例化
};
Animal::~Animal()
{
	cout << "Animal类的纯虚析构函数调用" << endl;
}
class Cat :public Animal
{
public:
	Cat(string name)
	{
		cout << "Cat构造函数调用" << endl;
		m_Name =new string(name);
	}
	void speak()
	{
		cout << *m_Name << "小猫在说话" << endl;
	}
	~Cat()
	{
		cout << "Cat析构函数调用" << endl;
		if (m_Name != NULL)
		{
			delete m_Name;
			m_Name = NULL;
		}
	}  
	string* m_Name;
};

void test01()
{
	Animal* a = new Cat("Tom");
	a->speak();
	delete a;//父类指针析构的时候不会调用子类的析构代码 导致子类如果有堆区属性会造成内存泄漏
	//将父类的析构函数改为虚析构就会走子类析构代码
}
int main()
{
	test01();
	system("pause");
}