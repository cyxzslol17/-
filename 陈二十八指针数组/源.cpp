#include<iostream>
using namespace std;

int main() {

	int cyx[10] = { 1,2,3,4,5,6,7,8,9,10 };

	int* p = cyx;

	cout << "利用指针访问第一个元素：" << *p << endl;



	for (int i = 0; i < 10; i++)
	{
		cout << *p << endl;

		p++;
	}


	system("pause");

	return 0;


}