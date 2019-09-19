# include<iostream>
#include<Windows.h>
using namespace std;
# include<cmath>
void main()
{
	int a, b, c;
	float delta, x1, x2;
	cout << "请输入a,b,c的值:" << endl;
	cin >> a >> b >> c;
	delta = b * b - 4 * a*c;
	if (delta < 0)
		cout << "方程无根" << endl;
	else if (delta == 0)
	{
		x1 = -b / (2 * a);
		cout << "方程的根为" << x1 << endl;
	}
	else
	{
		x1 = (-b + sqrt(delta)) / (2 * a);
		x2 = (-b - sqrt(delta)) / (2 * a);
		cout << "方程的根为" << x1 << "和" << x2 << endl;
	}
	//return 0;
	system("pause");
}