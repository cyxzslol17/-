#include<iostream>
using namespace std;

int main() {

	int a = 15;
	int b = 16;
	int c = 17;

	c = (a > b ? a : b);

	cout << "c =" << c << endl;

	(a > b ? a : b) = 1000;
		cout << "a =" << a << endl;
	cout << "b =" << b << endl;
	system("pause");

	return 0;
}