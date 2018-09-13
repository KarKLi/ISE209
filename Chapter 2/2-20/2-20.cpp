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
后置++运算符会在语句执行完后对变量加一，
而前置++运算符会在语句执行前先对变量加一。
*/