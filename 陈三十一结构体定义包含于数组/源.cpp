#include<iostream>
using namespace std;
#include<string>


struct student
{
	string name;
	int age;
	int score;
};


int main() {

	struct student xzlcyx[3] =
	{
		{"������",18,100},
		{"���",18,99},
		{"����",18,99},



	};

	for (int i = 0; i < 3; i++)
	{
		cout <<   "������ "   << xzlcyx[i].name <<   "���䣺 " << xzlcyx[i].age   <<   "����̶�:"    <<   xzlcyx[i].score << endl;



	}




	system("pause");
		return 0;



}