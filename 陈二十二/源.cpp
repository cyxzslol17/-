#include<iostream>
using namespace std;
#include<string>
int main() {

	int scores[3][3] =
	{
		{100,44,37},
		{90,80,70},
	{10,50,90,}


	};
	string names[3] = { "陈玉祥","罗昊","胡浩" };
	for (int i = 0; i < 3; i++)
	{
		int sum = 0;
		for (int j = 0; j < 3; j++)
		{
			sum += scores[i][j];
			cout << scores[i][j] << "  ";

		}
		cout << names[i] << "的总分为：" << sum << endl;

	}









	system("pause");
		return 0;
}