#include<iostream>
using namespace std;
int asd(int& a, int& b)
{
	int c = 0;
	for (int i = 1;i <= a && i <= b;i++)
	{
		if (a % i == 0 && b % i == 0)
		{
			c = i;

		}
	}return c;
}
int qwe(int& x, int& y)
{
	int d = 0;
	for (int i = 1;;i++)
	{
		if (i % x == 0 && i % y == 0)
		{
			d = i;
			return d;
		}
	}
}
int main()
{
	int a, b;
	cin >> a >> b;
	cout<<"��С������" << qwe(a, b) << endl;
	cout<<"���Լ��" << asd(a, b) << endl;
	

}

