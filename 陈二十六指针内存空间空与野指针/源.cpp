#include<iostream>
using namespace std;

int main() {

	int a = 10;
	int* p = &a;
	cout << "sizeof (int*) =" << sizeof(int*) << endl;

	//¿ÕÖ¸Õë
	//int *p = NULL;
	//*P =100


	//Ò°Ö¸Õë
	//int * p= (int *)0x2345;
	//cout << *p << endl;

	system("pause");

	return 0;


}