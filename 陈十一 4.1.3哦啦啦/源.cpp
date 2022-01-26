#include<iostream>
using namespace std;

int main() {

	cout << "请给电影打个分" << endl;

	int score = 0;
	cin >> score;
	cout << "您打的分数为：" << score << endl;

	switch (score)
	{
	case 10:
		cout << "你觉得是牛逼电影" << endl;
		break;
	case 9:
		cout << "你觉得是牛逼电影" << endl;
		break;
	case 8:
		cout << "你觉得是wocao电影" << endl;
		break;
	case 7:
		cout << "你觉得是wocao电影" << endl;
		break;
	case 6:
		cout << "你觉得是一般电影" << endl;
		break;
	case 5:
		cout << "你觉得是一般电影" << endl;
		break;
	default:
			cout << "你觉得是垃圾电影" << endl;
	}
	system("pause");

	return 0;
}