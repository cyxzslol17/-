#include<iostream>
using namespace std;

int main() {

	//赋值运算符

	int g = 10;
	g = 100;
	cout << "g = " << g << endl;

	int z = 10;
	z += 2;
	cout << "z = " << z << endl;

	int c = 10;
	c -= 2;
	cout << "c = " << c << endl;

	int d = 10;
	d *= 2;
	cout << "d = " << d << endl;

	int e = 10;
	e /= 2;
	cout << "e = " << e << endl;

	int f = 10;
	f %= 2;
	cout << "f = " << f << endl;

	//比较运算符
	int a = 10;
	int b = 20;

	cout << (a == b) << endl;

	cout << (a != b) << endl;

	cout << (a > b) << endl;

	cout << (a < b) << endl;

	cout << (a >= b) << endl;

	cout << (a <= b) << endl;

	//逻辑运算符

	int h = 10;

	cout << !h << endl;

	int j = 10;
	int k = 10;

	cout << ( j && k ) << endl;

	int l = 0;
	int m = 0;

	cout << ( l || m ) << endl;






	system("pause");

	return 0;
}