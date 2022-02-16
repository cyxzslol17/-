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

	cout << "姓名：" << stu->name << "年龄:" << stu->age << "分数:" << stu->score << endl;

}





int main() {

	student stu = { "鸣人",18,100 };

	printstudent(&stu);



	system("pause");
	return 0;
}