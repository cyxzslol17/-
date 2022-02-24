#include<iostream>
using namespace std;


//全局变量
int c = 9;


int main()
{


	//局部变量
	int a = 0;
	//静态变量
	static int b = 7;
	//字符串常量
	cout << "字符串常量地址为：" << (int)&"hello world" << endl;

	//const修饰局部变量
	const int e = 7;

	cout << "局部常量地址为：" << (int)&e<< endl;

	cout << "全局变量地址为：" << (int)&c << endl;



	system("pause");
	return 0;
}