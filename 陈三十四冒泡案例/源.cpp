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
		cout << "����:" << herocyx[i].name << "���䣺" << herocyx[i].age << "�Ա�" << herocyx[i].sex << endl;
	}
}
   


int main() {

	struct hero herocyx[5] =
	{
		{"������ʿbuild",18,"��"},
		{"������ʿdrive",24,"��"},
		{"������ʿdecade",30,"��"},
		{"������ʿw",25,"��"},
		{"������ʿjeanne",17,"Ů"},

	};
	int len = sizeof(herocyx) / sizeof(herocyx[0]);

	//for (int i = 0; i < len; i++)
	//{
	//	cout << "����:" << herocyx[i].name << "���䣺" << herocyx[i].age << "�Ա�" << herocyx[i].sex << endl;
	//}
	bubblesort(herocyx, len);
	
	printhero(herocyx, len);
	system("pause");
	return 0;
}