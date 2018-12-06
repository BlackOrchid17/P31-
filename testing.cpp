// ??????????? ?????.cpp : Defines the entry point for the console application.
//

//#include "stdafx.h"
#include <iostream>
#include<iomanip>

#include<cstdlib>
using namespace std;

class SimpleClass
{
	int *ptr; //pointer for someone memory area 
public:

	SimpleClass() //  Construct
	{
		cout << "\nNormal constr\n";
	}
	SimpleClass(const SimpleClass &obj)
	{
		cout << "\nCopy constr \n";
	}
	~SimpleClass()
	{
		cout << "\nDestruct\n";
	}
};
void funcShow(SimpleClass object)
{
	cout << "\nFunction accepted object like parametr\n";
}

SimpleClass funcReturnObject()
{
	SimpleClass object;
	cout << "\nFunction return object\n";
	return object;
}

int main()
{

	const int NotUsed = system("color F0");
	cout << "1 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	SimpleClass obj1; // creating an object 

	cout << "2 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	funcShow(obj1); // give that object in fuction

	cout << "3 - 4 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	funcReturnObject(); // this function return object

	cout << "5 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	SimpleClass obj2 = obj1;  // object initialization at creation
	cout<<"hi my little programmer";
	
	system("pause");
	return 0;
	system("pause");
	//_getch();
}
