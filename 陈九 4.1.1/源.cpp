#include<iostream>
using namespace std;

int main() {
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;

	cout << "ÇëÊäÈë³ÂÓñÏéµÄ³É¼¨" << endl;
	cin >> num1;

	cout << "ÇëÊäÈëÂŞê»µÄ³É¼¨" << endl;
	cin >> num2;

	cout << "ÇëÊäÈëºúºÆµÄ³É¼¨" << endl;
	cin >> num3;

	cout << "³ÂÓñÏéµÄ³É¼¨Îª£º" << num1 << endl;
	cout << "ÂŞê»µÄ³É¼¨Îª£º" << num2 << endl;
	cout << "ºúºÆµÄ³É¼¨Îª£º" << num3 << endl;

	if (num1 > num2)
	{
		if (num1 > num3)
		{
			cout << "³ÂÓñÏé×î¸ß" << endl;
		}
		else
		{
			cout << "ºúºÆ×î¸ß" << endl;
		}

	}
	else
	{
		if (num2 > num3)
		{
			cout << "ÂŞê»×î¸ß" << endl;
		}
	}




	system("pause");

	return 0;
}