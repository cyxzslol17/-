#include<iostream>
using namespace std;

int main() {

	int arr[9] = { 1,4,7,5,9,2,3,8,6 };

	cout << "ÅÅĞòÇ°£»" << endl;
	for (int i = 0; i < 9; i++)
	{
		cout << arr[i] << "";
	}

	cout << endl;

	for (int i = 0; i < 9 - 1; i++)
	{
		for (int j = 0; j < 9 - i - 1; j ++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;

			}
		}
	}
	cout << "ÅÅĞòºó£»" << endl;
	for (int i = 0; i < 9; i++)
	{
		cout << arr[i] << "";
	}

	cout << endl;



	system("pause");

	return 0;
}