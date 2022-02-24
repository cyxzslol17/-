#include<iostream>
using namespace std;


int* func()
{
	int* a = new int(10);
	return a;
}



int main()
{

	int* p = func();

	cout << *p << endl;

	cout << *p << endl;

	delete p;

	//cout << *p << endl;

	int* cyx = new int[10];



	system("pause");
	return 0;
}