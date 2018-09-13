//2-33
#include <iostream>
using namespace std;
enum Weekday {
	SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY
};
int main()
{
	//三种不同的给枚举对象赋值的方法：直接赋值，强制类型转换赋值，和索引赋值。
	Weekday wk = THURSDAY;
	int i;
	cout << "d is:" << wk << endl;
	i = wk;
	cout << "i is:" << i << endl;
	wk = (Weekday)6;
	cout << "d is:" << wk << endl;
	wk = Weekday(4);
	cout << "d is:" << wk << endl;
	getchar();
	return 0;
}