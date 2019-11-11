
#include<iostream>
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<windows.h>
#include<string>
using namespace std;
#define SIZE 80
class point
{
	double a, b;
public:
	point();
	point(double a, double b);
	point(const point& r);//三构造函数
	~point();//析构函数
	double GetX();//提取横坐标
	double GetY();//提取纵坐标
	void Display(); //显示信息
	void SetX(double ax);//修改横坐标
	void SetY(double bx);//修改纵坐标
	void SwapPoint(double& a, double& b);//交换坐标值： void SwapPoint(double& ra, double& xb);
	friend double GetLength(point& A, point& B);//友元函数:计算两点距离
}point1,point2;
point::point()
{
	a = b = 0;
}
//构造函数
point::point(double a, double b)
{
	this->a = a;
	this->b= b;
}
point::point(const point& r)
{
	a = r.a;
	b = r.b;
}
point::~point()
{
	
}
double point::GetX()
{
	cout << "x坐标：" << a << endl;
	return a;
}
//提取横坐标
double point::GetY()
{
	cout << "y坐标：" << b << endl;
	return b;
}
//提取纵坐标
void point::Display()
{
	cout << "x坐标：" << a<< endl;
	cout << "y坐标：" << b<< endl;
}
//显示信息
void point::SetX(double ax)
{
	this->a = ax;
}//修改横坐标
void point::SetY(double ay)
{
	this->b  = ay;
}//修改纵坐标
void point::SwapPoint(double &a, double &b)
{
	int temp; //辅助变量  
	temp = a;
	a = b;
	b = temp;
	cout << "x坐标：" << a << endl;
	cout << "y坐标：" << b << endl;
}
 double GetLength(point& A, point& B)//计算两点距离
{
	double x = double(A.a - B.a); //通过对象访问私有数据成员 
	double y = double(A.b - B.b);

	return double(sqrt(x*x + y * y));
}


int main()
{
	double a, b;
	int i;
	cout << "输入x坐标：";
	cin >> a;
	cout << "输入y坐标：";
	cin >> b;
	point point1(a,b);
	point1.Display();
	cout << "坐标是否都正确无误，如果x错误请按1，x错误请按2，无误请按0：";
	cin >> i;
	while (i)
	{
	
		if (i = 1)
		{
			cout << "输入x坐标：";
			cin >> a;
			point1.SetX(a);
		}
		else if (i = 2)
		{
			cout << "输入y坐标：";
			cin >> a;
			point1.SetX(a);
		}
		point1.Display();
		cout << "坐标是否都正确无误，如果x错误请按1，x错误请按2，无误请按0：";
		cin >> i;

	};
	//修改
	cout << "  " << endl;
	cout << "是否需要查询坐标：需要查询x请按1，需要查询y请按2，不需要请按0:";
	cin >> i;
	while (i)
	{

		if (i = 1)
		{
	cout << "查询x坐标" << endl;
	point1.GetX();
		}
		else if (i = 2)
		{
	cout << "查询y坐标" << endl;
	point1.GetY();
		}
		 i=0;

	};
	//查询
	cout << "  " << endl;
	cout << "是否需要交换x,y坐标值，需要请按1，不需要请按0:";
	cin >> i;
	while (i)
	{
		point1.SwapPoint(a,b);
		i = 0;
	}
	//交换
	cout << "  " << endl;
	cout << "现在进行计算两点之间的距离：";
		int x1, y1, x2, y2;
		cout << "请输入第一个点的坐标（x1,y1）： "<<endl;
		cout << "输入x坐标：";
		cin >> x1 ;
		cout << "输入y坐标：";
		cin >> y1;
		cout << "请输入第二个点的坐标（x2,y2）： "<<endl;
		cout << "输入x坐标：";
		cin >> x2;
		cout << "输入y坐标：";
		cin >> y2;
		point youp1(x1, y1), youp2(x2, y2);
		cout << "距离为 : " << GetLength(youp1, youp2) << endl;//计算两点间的距离 
	system("pause");
	return 0;
}
