//2-32��do-while�棩
#include <iostream>
using namespace std;
int main()
{
	int m = 56;
	int n = 0;
	do
	{
		cout << "Guess a number!(1~100)" << endl;
		cin >> n;
		if (n > m)
		{
			cout << "Too big!" << endl;
		}
		else if (n < m)
		{
			cout < "Too small!" << endl;
		}
		else
			cout << "Bingo!" << endl;
	} while (n != m);
	return 0;
}