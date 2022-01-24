#include<iostream>
using namespace std;

int main() {

	int a1 = 4;
	int b1 = 3;
	//四则运算
	cout << a1 + b1 << endl;
	cout << a1 - b1 << endl;
	cout << a1 * b1 << endl;
	cout << a1 / b1 << endl;

	cout << a1 % b1 << endl;

	//前置递增 后置递增 减法省略
	int a = 10;
		++a;
		cout << "a = " << a << endl;

		int b = 10;
		b++;
		cout << "b = " << a << endl;

	

	system("pause");

	return 0;
}