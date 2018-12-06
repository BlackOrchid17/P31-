// 06.10.2018-????????? ????.cpp : Defines the entry point for the console application.
//
#include<iostream>
using namespace std;

class MyClass
{
public:
	int *p;
	MyClass() {};
	MyClass(int izm);
	MyClass(const MyClass &p_ob);
	~MyClass();
	int getVal()
	{
		return *p;
	}
};
MyClass::MyClass(int izm)
{
	p = new int;
	*p = izm;
	cout << p << "\tAllocatication p-memory with normal construct.\t" << *p << endl;
 }
MyClass::MyClass(const MyClass &p_ob)
{
	p = new int;
	*p = *p_ob.p;
	cout<<p<<"\tAllocation p-memory with copy-construct.\t"<<*p<<endl;
}
MyClass::~MyClass()
{
	cout << p << "\trelease of p-memory.\t" << *p << endl;
	delete p;
}
void showData(MyClass obj)
{
	cout << *obj.p << "= in function showData.\t" << obj.p << endl;
}
MyClass returnObject()
{
	MyClass obj(111);
	cout << "in function returnObject\t" << *obj.p << endl;
    return obj;
}

int main()
{
	const int NotUsed = system("color F0");
	MyClass A_ob(10), retObj(0);
	MyClass B_ob = A_ob;
	showData(A_ob);
	retObj = returnObject();
	cout << *retObj.p << "-object from function"<<retObj.p<<endl;
	cout << "hi,my little programmer";
	system("pause");
	

    return 0;
}


