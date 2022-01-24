#include<iostream>
using namespace std;

int main() {

	//布尔
	bool flag = true;
	cout << "flag" << endl;

	bool futur = false;
	cout << "future" << endl;

	//数据的输入
	int a = 0;
	cout << "请给整形型变量a赋值：" << endl;
	cin >> a;
	cout << "整型变量a =" << a << endl;

	float f = 3.14f;
	cout << "请给浮点型变量f赋值：" << endl;
	cin >> f;
	cout << "浮点型变量f =" << f << endl;

	char ch = 'a';
	cout << "请给字符型变量ch赋值：" << endl;
	cin >> ch;
	cout << "字符型变量ch =" << a << endl;

	string str = "hello";
		cout << "请给字符串 str赋值：" << endl;
	cin >> str;
	cout << "字符串str =" << str << endl;




	system("pause");

	return 0;
}