//2-28
#include <iostream>
using namespace std;
int main()
{
	char input;
	while (true)
	{
		cout << "Menu: A(dd) D(elete) S(ort) Q(uit),Select one:" << endl;
		cin >> input;
		input = toupper(input);
		if (input == 'Q')
			break;
		else
		{
			switch (input)
			{
			case 'A':
				cout << "数据已经增加。" << endl;
				break;
			case 'D':
				cout << "数据已经删除。" << endl;
				break;
			case 'S':
				cout << "数据已经排序。" << endl;
				break;
			default:
				cout << "错误输入！" << endl;
				break;
			}
		}
	}
	cin.ignore();
	return 0;
}