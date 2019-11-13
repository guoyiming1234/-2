#include<iostream>
#include<string>
using namespace std;
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<windows.h>

class Student
{
	char name;
	bool gender;//性别
	double ID;
	string research;//研究领域
	string tutor;//指导教师
	double score;//入学成绩 常成员变量
	static double count;  //记录对象个数 
	static double sum;    //记录总成绩 

public:
	Student();
	Student(char name, double id, bool gender, double score, string research, string tutor);
	~Student();
	void Display()const;
	void display();
	//void input();
	void inputscore();//只输入成绩
	double getsum();  //计算总成绩 
	static double average(); //获取成绩平均值 
	static double getcount();  //获取对象个数 
	friend void dengji(Student& A);//友元函数:计算等级
};
double Student::count = 0;
double Student::sum = 0;
void Student::inputscore()
{
	cout << "输入成绩：" << endl;
	cin >> score;

}
double Student::getsum()
{
	count++;
	return sum += score;
}
double Student::average()
{
	if (count != 0)
		return sum / count;
	else
		return count;
}
double Student::getcount()
{
	return count;
}
void Student::display()//采用普通成员函数形式输出研究生的单项基本数据信息;
{

	cout << "姓  名：" << name << endl;
	cout << "性  别：" << gender << endl;
	cout << "学  号：" << ID << endl;
	cout << "入学成绩：" << score << endl;
	cout << "研究领域：" << research.c_str() << endl;
	cout << "指导教师：" << tutor.c_str() << endl;
}
void Student::Display()const//采用常成员函数形式输出研究生的单项基本数据信息;
{
	
	cout << "姓  名：" << name << endl;
	cout << "性  别：" << gender << endl;
	cout << "学  号：" << ID << endl;
	cout << "入学成绩：" << score << endl;
	cout << "研究领域：" << research.c_str() << endl;
	cout << "指导教师：" << tutor.c_str() << endl;
}
Student::Student()
{
	
}
Student::Student(char name, double id, bool gender, double score,string research, string tutor)
{
	this->name = name;
	this->ID= id;
	this->gender = gender;
	this->score = score;
	this->research = research;
	this->tutor = tutor;
}
Student::~Student()
{

}
/*void Student::input() //学生信息输入 
{
	cout << "姓  名：" << endl;
	cin >> name;
	cout << "性  别："  << endl;
	cin >> gender;
	cout << "学  号："  << endl;
	cin >> ID;
	cout << "入学成绩：" << endl;
	cin >> score;
	cout << "研究领域："  << endl;
	cin >> research;
	cout << "指导教师：" << endl << endl;
	cin >> tutor;
}*/
void dengji(Student& A)//友元函数:计算等级
{
	if (A.score >=90)
		cout << "他的等级为A" << endl;
	else if((A.score<90)&&(A.score >= 80))
		cout << "他的等级为B" << endl;
	else if ((A.score < 80) && (A.score >= 70))
		cout << "他的等级为C" << endl;
	else if ((A.score < 70) && (A.score >= 60))
		cout << "他的等级为D" << endl;
	if (A.score<60)
		cout << "他的等级为E" << endl;
}
int main()
{
	cout << "请输入个人信息：" << endl;
	char name;
	bool gender;//性别
	double ID;
	string research;//研究领域
	string tutor;//指导教师
	double score;//入学成绩 
	cout << "姓  名：" << endl;
	cin >> name;
	cout << "性  别：" << endl;
	cin >> gender;
	cout << "学  号：" << endl;
	cin >> ID;
	cout << "入学成绩：" << endl;
	cin >> score;
	cout << "研究领域：" << endl;
	cin >> research;
	cout << "指导教师：" << endl << endl;
	cin >> tutor;
	Student student1( name,ID,gender, score,research, tutor);
	student1.Display();
	student1.display();


	cout << "有几名同学：" << endl;
	int n;
	cin >> n;
	Student *p = new Student[n];
	while (n--)
	{
		p->inputscore();
		p->getsum();
		dengji( *p);
		p++;
	}
	cout << "平均成绩为=" << Student::average() << endl;
	system("pause");
	return 0;
}
