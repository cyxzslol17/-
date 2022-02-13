#include<iostream>
using namespace std;

int main() {
	int a = 10;
	int b = 20;

	const int* p = &a;


	int a = 10;
	int b = 20;

	const int* constp = &a;



	int a = 10;
	int b = 20;

     int* const p = &a;

	 //总结感悟const出现在那个前面就会被限制










	system("pause");

	return 0;


}