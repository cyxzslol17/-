#include<iostream>
using namespace std;

int main() {

//字符型
	char ch = 'a';
	cout << ch << endl;

	//转义字符
	cout << "future\n";

	cout << "\\" << endl;

	cout << "future\thope" << endl;

	//字符串
	//C风格
	char str[] = "future";
	cout << "future" << endl;
	//C++风格加头部文件
 #include<iostream>
	string str2 = "future";
	cout << "str2" << endl;


	system("pause");

	return 0;
}