#include<iostream>
using namespace std;
#include<string>
struct student
{
	string name;
	int age;
	int score;


};

void printstudent(const student* stu)
{

	cout << "������" << stu->name << "����:" << stu->age << "����:" << stu->score << endl;

}





int main() {

	student stu = { "����",18,100 };

	printstudent(&stu);



	system("pause");
	return 0;
}