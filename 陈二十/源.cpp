#include<iostream>
using namespace std;

int main() {

	int arr[5] = { 1,2,3,4,5 };
	int max = 0;
	for (int i = 0; i < 5; i++)
	{

		if (arr[i] > max)
		{
			max = arr[i];
		}



	}
	cout << "最重那修勾体重为" << max << endl;
	system("pause");

	return 0;
}