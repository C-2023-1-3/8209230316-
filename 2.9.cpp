#include<iostream>
using namespace std;
int main ()
{
	int a = 2;int b,d,g;
	int c = 2;int f = 1;

	
	do{
		b = a * 2;
		
		c = c + b;
		d = a;
		a = b;
		b = d;
		f = f + 1;

	}while (c <= 100);
	int num = c - a;
		double e = 0.8*num /( f-1);
	cout << f-1 << endl;
	cout << num << endl;
	cout << e << endl;

}