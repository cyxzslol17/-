#include<iostream>
using namespace std;


//ȫ�ֱ���
int c = 9;


int main()
{


	//�ֲ�����
	int a = 0;
	//��̬����
	static int b = 7;
	//�ַ�������
	cout << "�ַ���������ַΪ��" << (int)&"hello world" << endl;

	//const���ξֲ�����
	const int e = 7;

	cout << "�ֲ�������ַΪ��" << (int)&e<< endl;

	cout << "ȫ�ֱ�����ַΪ��" << (int)&c << endl;



	system("pause");
	return 0;
}