#include <iostream>
using namespace std;

struct hero
{
	string name;
	int age;
	string sex;


};
void bubblesort(struct hero herocyx[], int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - 1 - i; j++)
		{
			if (herocyx[j].age > herocyx[j + 1].age)
			{
				struct hero temp = herocyx[j];
				herocyx[j] = herocyx[j + 1];
				herocyx[j + 1] = temp;
			}
		}
	}
}
void printhero(struct hero herocyx[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "姓名:" << herocyx[i].name << "年龄：" << herocyx[i].age << "性别：" << herocyx[i].sex << endl;
	}
}
   


int main() {

	struct hero herocyx[5] =
	{
		{"假面骑士build",18,"男"},
		{"假面骑士drive",24,"男"},
		{"假面骑士decade",30,"男"},
		{"假面骑士w",25,"男"},
		{"假面骑士jeanne",17,"女"},

	};
	int len = sizeof(herocyx) / sizeof(herocyx[0]);

	//for (int i = 0; i < len; i++)
	//{
	//	cout << "姓名:" << herocyx[i].name << "年龄：" << herocyx[i].age << "性别：" << herocyx[i].sex << endl;
	//}
	bubblesort(herocyx, len);
	
	printhero(herocyx, len);
	system("pause");
	return 0;
}