//2-20
#include <iostream>
using namespace std;
int main()
{
	int myAge = 39;
	int yourAge = 39;
	cout << "I am:" << myAge << " years old.\n";
	cout << "You are:" << yourAge << " years old\n";
	myAge++;
	++yourAge;
	cout << "One year passes..." << endl;
	cout << "I am:" << myAge << "years old." << endl;
	cout << "You are:" << yourAge << " years old." << endl;
	cout << "Another year passes." << endl;
	cout << "I am:" << myAge++ << " years old." << endl;
	cout << "You are:" << ++yourAge << " years old." << endl;
	cout << "Let's print it again." << endl;
	cout << "I am:" << myAge << " years old." << endl;
	cout << "You are:" << yourAge << " years old." << endl;
	getchar();
	return 0;
}
/*
����++������������ִ�����Ա�����һ��
��ǰ��++������������ִ��ǰ�ȶԱ�����һ��
*/