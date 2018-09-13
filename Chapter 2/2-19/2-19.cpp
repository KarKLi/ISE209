//2-19
#include <iostream>
using namespace std;
int main()
{
	unsigned int x;
	unsigned int y = 100;
	unsigned int z = 50;
	x = y - z;
	cout << "Difference is:" << x << endl;
	x = z - y;
	cout << "\nNow difference is:" << x << endl;
	getchar();
	return 0;
}
/*
输出结果为：
Difference is: 50

Now difference is:4294967246
与设想不相同
原因：无符号整数的负数从2^32开始回环。
*/