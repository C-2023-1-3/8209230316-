#include<iostream>
using namespace std;
class Student
{
public:
	Student(int a,int b):num(a),grade(b)
	{}
	int num;
	int grade;
};
void Max(Student *s)
{
	int max = s[0].grade;
	for (int i = 1;i < 5;i++)
	{
		if(s[i].grade>max)
		{
			max = s[i].grade;
		}
	}
	for (int i = 0;i < 5;i++)
	{
		if (s[i].grade == max)
		{
			cout << s[i].num << endl;
		}
	}
	
}
void test01()
{
	
	Student s[5] = { {1,99},{2,95},{3,93},{4,89},{5,91} };
	/*s[0].num = 1;
	s[0].grade = 99;
	s[1].num = 2;
	s[1].grade = 96;
	s[2].num = 3;
	s[2].grade = 89;
	s[3].num = 4;
	s[3].grade = 93;
	s[4].num = 5;
	s[4].grade = 95;*/
	Max(s);
	
}
int main()
{
	test01();

}