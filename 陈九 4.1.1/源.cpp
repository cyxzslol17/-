#include<iostream>
using namespace std;

int main() {
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;

	cout << "�����������ĳɼ�" << endl;
	cin >> num1;

	cout << "��������껵ĳɼ�" << endl;
	cin >> num2;

	cout << "��������Ƶĳɼ�" << endl;
	cin >> num3;

	cout << "������ĳɼ�Ϊ��" << num1 << endl;
	cout << "��껵ĳɼ�Ϊ��" << num2 << endl;
	cout << "���Ƶĳɼ�Ϊ��" << num3 << endl;

	if (num1 > num2)
	{
		if (num1 > num3)
		{
			cout << "���������" << endl;
		}
		else
		{
			cout << "�������" << endl;
		}

	}
	else
	{
		if (num2 > num3)
		{
			cout << "������" << endl;
		}
	}




	system("pause");

	return 0;
}