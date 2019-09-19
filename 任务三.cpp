#include<iostream>
#include<Windows.h>
using namespace std;
# include<cmath>
void main()
{
	int a, b, c, sum;
	int d;
    cout << "请输入年月日:" << endl;
	cin >> a >> b >> c;
	switch (b)//将月份化成天
	{
	case 1:sum = 0; break;
	case 2:sum = 31; break;
	case 3:sum = 59; break; //以2月有28天起步
	case 4:sum = 90; break;
	case 5:sum = 120; break;
	case 6:sum = 151; break;
	case 7:sum = 181; break;
	case 8:sum = 212; break;
	case 9:sum = 243; break;
	case 10:sum = 273; break;
	case 11:sum = 304; break;
	case 12:sum = 334; break;
	default:("数据错误"); break;
	}
	if (a % 400 == 0 || (a % 4 == 0 && a % 100 != 0))//考虑闰年
	{
		if (sum >= 59) sum = sum + 1;//超过二月份的加一天,不超过的不变
	}//自此结束月的转化
	sum = sum + c;//月加天
	cout << "这一天是该年的第" << sum << "天" << endl;
	d = (sum / 7)+1;//周
	cout << "这一天是该年的第" << d << "周" << endl;
	system("pause");
}
