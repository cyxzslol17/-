#include<iostream>
using namespace std;

#include <ctime>

int main() {

	srand((unsigned int)time(NULL));

	int num = rand() % 100 + 1;
	
	int val = 0;

	while (1)
	{

		cin >> val;

		if (val > num)
		{
			cout << "�²����" << endl;
		}
		else if (val < num)
		{
			cout << "�²��С" << endl;
		}
		else
		{
			cout << "��ϲ��¶���" << endl;

			break;
		}
	}



}