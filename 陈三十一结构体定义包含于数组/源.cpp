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
		{"³ÂÓñÏé",18,100},
		{"ÂŞê»",18,99},
		{"ºúºÆ",18,99},



	};

	for (int i = 0; i < 3; i++)
	{
		cout <<   "ĞÕÃû£º "   << xzlcyx[i].name <<   "ÄêÁä£º " << xzlcyx[i].age   <<   "ÀÁ¶è³Ì¶È:"    <<   xzlcyx[i].score << endl;



	}




	system("pause");
		return 0;



}