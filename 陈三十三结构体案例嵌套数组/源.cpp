#include<iostream>
using namespace std;
#include<string>

struct student
{
	string sname;
	int score;



};



struct teacher
{

	string tname;
	struct student scyx[5];
};

void haofanyigedongxi(struct teacher tcyx[], int len)
{
	string nameseed = "ABCDE";
		for (int i = 0; i < len; i++)
		{
			tcyx[i].tname = "teacher_";
			tcyx[i].tname += nameseed[i];


			for (int j = 0; j < 5; j++)
			{
				tcyx[i].scyx[j].sname = "student_";
				tcyx[i].scyx[j].sname += nameseed[j];

				tcyx[i].scyx[j].score = 60;
			}
		}

}

void printinfo(struct teacher tcyx[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "" << tcyx[i].tname << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << "ѧ������" << tcyx[i].scyx[j].sname << "���Է��� :" <<
				tcyx[i].scyx[j].score << endl;
		}
	}
}


int main() {

	struct teacher tcyx[3];

	int len = sizeof(tcyx) / sizeof(tcyx[0]);
	haofanyigedongxi(tcyx, len);

	printinfo(tcyx, len);

	system("pause");
	return 0;
}