//2-27
#include <iostream>
using namespace std;
int main()
{
	int n=0;
	cout << "�㿼�Կ��˶��ٷ֣�(0~100)";
	cin >> n;
	while (n > 100 || n < 0)
	{
		cout << "������ȷ�ķ�����" << endl;
		cout << "�㿼�Կ��˶��ٷ֣�(0~100)";
		cin >> n;
	}
	n = n / 10;
	switch (n) 
	{
	case 9:
	case 10:
		cout << "�ɼ�Ϊ�ţ�" << endl;
		break;
	case 8:
		cout << "�ɼ�Ϊ����" << endl;
		break;
	case 7:
	case 6:
		cout << "�ɼ�Ϊ��" << endl;
		break;
	default:
		cout << "�ɼ�Ϊ��" << endl;
		break;
	}
	cin.ignore();
	getchar();
	return 0;
}