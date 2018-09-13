//2-32（while版）
#include <iostream>
using namespace std;
int main()
{
	int m = 56;
	int n = 0;
	while (n != m)
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
	}
	return 0;
}