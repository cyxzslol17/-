#include<iostream>
using namespace std;

int main() {
 
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10, };
	cout << "��������ռ���ڴ�ռ�Ϊ��" << sizeof(arr) << endl;
	cout << "ÿ��Ԫ��ռ���ڴ�ռ�Ϊ��" << sizeof(arr[0]) << endl;
	cout << "������Ԫ�ظ���Ϊ��" << sizeof(arr) / sizeof(arr[0]) << endl;


	cout << "�����׵�ַΪ��" << (int)arr << endl;


	system("pause");

	return 0;
}