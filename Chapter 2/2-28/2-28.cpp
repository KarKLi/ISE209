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
				cout << "�����Ѿ����ӡ�" << endl;
				break;
			case 'D':
				cout << "�����Ѿ�ɾ����" << endl;
				break;
			case 'S':
				cout << "�����Ѿ�����" << endl;
				break;
			default:
				cout << "�������룡" << endl;
				break;
			}
		}
	}
	cin.ignore();
	return 0;
}