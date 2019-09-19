#include<iostream>
#include<Windows.h>
using namespace std;
# include<cmath>
void main()
{
	float a, b, c;
	float delta, d;
	cout << "请输入a,b,c的值:" << endl;
	cin >> a >> b >> c;
	if (a + b <= c || fabs(a - b) >= c)
	{
		cout << "数值有误." << endl;
	}
	else
	{
		d = (a + b + c) / 2;
		delta = sqrt(d*(d - a)*(d - b)*(d - c));
		cout << "三角形的面积为" << delta << endl;
	}
	//return 0;
	system("pause");
}