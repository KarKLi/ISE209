//2-33
#include <iostream>
using namespace std;
enum Weekday {
	SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY
};
int main()
{
	//���ֲ�ͬ�ĸ�ö�ٶ���ֵ�ķ�����ֱ�Ӹ�ֵ��ǿ������ת����ֵ����������ֵ��
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