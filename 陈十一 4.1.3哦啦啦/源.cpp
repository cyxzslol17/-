#include<iostream>
using namespace std;

int main() {

	cout << "�����Ӱ�����" << endl;

	int score = 0;
	cin >> score;
	cout << "����ķ���Ϊ��" << score << endl;

	switch (score)
	{
	case 10:
		cout << "�������ţ�Ƶ�Ӱ" << endl;
		break;
	case 9:
		cout << "�������ţ�Ƶ�Ӱ" << endl;
		break;
	case 8:
		cout << "�������wocao��Ӱ" << endl;
		break;
	case 7:
		cout << "�������wocao��Ӱ" << endl;
		break;
	case 6:
		cout << "�������һ���Ӱ" << endl;
		break;
	case 5:
		cout << "�������һ���Ӱ" << endl;
		break;
	default:
			cout << "�������������Ӱ" << endl;
	}
	system("pause");

	return 0;
}