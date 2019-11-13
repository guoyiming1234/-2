#include<iostream>
#include<string>
using namespace std;
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<windows.h>

class Student
{
	char name;
	bool gender;//�Ա�
	double ID;
	string research;//�о�����
	string tutor;//ָ����ʦ
	double score;//��ѧ�ɼ� ����Ա����
	static double count;  //��¼������� 
	static double sum;    //��¼�ܳɼ� 

public:
	Student();
	Student(char name, double id, bool gender, double score, string research, string tutor);
	~Student();
	void Display()const;
	void display();
	//void input();
	void inputscore();//ֻ����ɼ�
	double getsum();  //�����ܳɼ� 
	static double average(); //��ȡ�ɼ�ƽ��ֵ 
	static double getcount();  //��ȡ������� 
	friend void dengji(Student& A);//��Ԫ����:����ȼ�
};
double Student::count = 0;
double Student::sum = 0;
void Student::inputscore()
{
	cout << "����ɼ���" << endl;
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
void Student::display()//������ͨ��Ա������ʽ����о����ĵ������������Ϣ;
{

	cout << "��  ����" << name << endl;
	cout << "��  ��" << gender << endl;
	cout << "ѧ  �ţ�" << ID << endl;
	cout << "��ѧ�ɼ���" << score << endl;
	cout << "�о�����" << research.c_str() << endl;
	cout << "ָ����ʦ��" << tutor.c_str() << endl;
}
void Student::Display()const//���ó���Ա������ʽ����о����ĵ������������Ϣ;
{
	
	cout << "��  ����" << name << endl;
	cout << "��  ��" << gender << endl;
	cout << "ѧ  �ţ�" << ID << endl;
	cout << "��ѧ�ɼ���" << score << endl;
	cout << "�о�����" << research.c_str() << endl;
	cout << "ָ����ʦ��" << tutor.c_str() << endl;
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
/*void Student::input() //ѧ����Ϣ���� 
{
	cout << "��  ����" << endl;
	cin >> name;
	cout << "��  ��"  << endl;
	cin >> gender;
	cout << "ѧ  �ţ�"  << endl;
	cin >> ID;
	cout << "��ѧ�ɼ���" << endl;
	cin >> score;
	cout << "�о�����"  << endl;
	cin >> research;
	cout << "ָ����ʦ��" << endl << endl;
	cin >> tutor;
}*/
void dengji(Student& A)//��Ԫ����:����ȼ�
{
	if (A.score >=90)
		cout << "���ĵȼ�ΪA" << endl;
	else if((A.score<90)&&(A.score >= 80))
		cout << "���ĵȼ�ΪB" << endl;
	else if ((A.score < 80) && (A.score >= 70))
		cout << "���ĵȼ�ΪC" << endl;
	else if ((A.score < 70) && (A.score >= 60))
		cout << "���ĵȼ�ΪD" << endl;
	if (A.score<60)
		cout << "���ĵȼ�ΪE" << endl;
}
int main()
{
	cout << "�����������Ϣ��" << endl;
	char name;
	bool gender;//�Ա�
	double ID;
	string research;//�о�����
	string tutor;//ָ����ʦ
	double score;//��ѧ�ɼ� 
	cout << "��  ����" << endl;
	cin >> name;
	cout << "��  ��" << endl;
	cin >> gender;
	cout << "ѧ  �ţ�" << endl;
	cin >> ID;
	cout << "��ѧ�ɼ���" << endl;
	cin >> score;
	cout << "�о�����" << endl;
	cin >> research;
	cout << "ָ����ʦ��" << endl << endl;
	cin >> tutor;
	Student student1( name,ID,gender, score,research, tutor);
	student1.Display();
	student1.display();


	cout << "�м���ͬѧ��" << endl;
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
	cout << "ƽ���ɼ�Ϊ=" << Student::average() << endl;
	system("pause");
	return 0;
}
