//2-27
#include <iostream>
using namespace std;
int main()
{
	int n=0;
	cout << "你考试考了多少分？(0~100)";
	cin >> n;
	while (n > 100 || n < 0)
	{
		cout << "输入正确的分数！" << endl;
		cout << "你考试考了多少分？(0~100)";
		cin >> n;
	}
	n = n / 10;
	switch (n) 
	{
	case 9:
	case 10:
		cout << "成绩为优！" << endl;
		break;
	case 8:
		cout << "成绩为良！" << endl;
		break;
	case 7:
	case 6:
		cout << "成绩为中" << endl;
		break;
	default:
		cout << "成绩为差" << endl;
		break;
	}
	cin.ignore();
	getchar();
	return 0;
}