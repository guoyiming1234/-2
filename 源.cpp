
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
	point(const point& r);//�����캯��
	~point();//��������
	double GetX();//��ȡ������
	double GetY();//��ȡ������
	void Display(); //��ʾ��Ϣ
	void SetX(double ax);//�޸ĺ�����
	void SetY(double bx);//�޸�������
	void SwapPoint(double& a, double& b);//��������ֵ�� void SwapPoint(double& ra, double& xb);
	friend double GetLength(point& A, point& B);//��Ԫ����:�����������
}point1,point2;
point::point()
{
	a = b = 0;
}
//���캯��
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
	cout << "x���꣺" << a << endl;
	return a;
}
//��ȡ������
double point::GetY()
{
	cout << "y���꣺" << b << endl;
	return b;
}
//��ȡ������
void point::Display()
{
	cout << "x���꣺" << a<< endl;
	cout << "y���꣺" << b<< endl;
}
//��ʾ��Ϣ
void point::SetX(double ax)
{
	this->a = ax;
}//�޸ĺ�����
void point::SetY(double ay)
{
	this->b  = ay;
}//�޸�������
void point::SwapPoint(double &a, double &b)
{
	int temp; //��������  
	temp = a;
	a = b;
	b = temp;
	cout << "x���꣺" << a << endl;
	cout << "y���꣺" << b << endl;
}
 double GetLength(point& A, point& B)//�����������
{
	double x = double(A.a - B.a); //ͨ���������˽�����ݳ�Ա 
	double y = double(A.b - B.b);

	return double(sqrt(x*x + y * y));
}


int main()
{
	double a, b;
	int i;
	cout << "����x���꣺";
	cin >> a;
	cout << "����y���꣺";
	cin >> b;
	point point1(a,b);
	point1.Display();
	cout << "�����Ƿ���ȷ�������x�����밴1��x�����밴2�������밴0��";
	cin >> i;
	while (i)
	{
	
		if (i = 1)
		{
			cout << "����x���꣺";
			cin >> a;
			point1.SetX(a);
		}
		else if (i = 2)
		{
			cout << "����y���꣺";
			cin >> a;
			point1.SetX(a);
		}
		point1.Display();
		cout << "�����Ƿ���ȷ�������x�����밴1��x�����밴2�������밴0��";
		cin >> i;

	};
	//�޸�
	cout << "  " << endl;
	cout << "�Ƿ���Ҫ��ѯ���꣺��Ҫ��ѯx�밴1����Ҫ��ѯy�밴2������Ҫ�밴0:";
	cin >> i;
	while (i)
	{

		if (i = 1)
		{
	cout << "��ѯx����" << endl;
	point1.GetX();
		}
		else if (i = 2)
		{
	cout << "��ѯy����" << endl;
	point1.GetY();
		}
		 i=0;

	};
	//��ѯ
	cout << "  " << endl;
	cout << "�Ƿ���Ҫ����x,y����ֵ����Ҫ�밴1������Ҫ�밴0:";
	cin >> i;
	while (i)
	{
		point1.SwapPoint(a,b);
		i = 0;
	}
	//����
	cout << "  " << endl;
	cout << "���ڽ��м�������֮��ľ��룺";
		int x1, y1, x2, y2;
		cout << "�������һ��������꣨x1,y1���� "<<endl;
		cout << "����x���꣺";
		cin >> x1 ;
		cout << "����y���꣺";
		cin >> y1;
		cout << "������ڶ���������꣨x2,y2���� "<<endl;
		cout << "����x���꣺";
		cin >> x2;
		cout << "����y���꣺";
		cin >> y2;
		point youp1(x1, y1), youp2(x2, y2);
		cout << "����Ϊ : " << GetLength(youp1, youp2) << endl;//���������ľ��� 
	system("pause");
	return 0;
}
