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
������Ϊ��
Difference is: 50

Now difference is:4294967246
�����벻��ͬ
ԭ���޷��������ĸ�����2^32��ʼ�ػ���
*/