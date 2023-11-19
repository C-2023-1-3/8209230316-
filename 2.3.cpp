#include<iostream>
using namespace std;
int main ()
{
	double a, b, c;
	cin >> a >> b >> c;
	if (a + c > b && a + b > c && b + c > a) {
		double d = a + b + c;
		cout << d << endl;
		if (a == b || a == c || b == c) { cout << "这是一个等腰三角形" << endl; }
		else cout << "这不是一个等腰三角形" << endl;
	}
	else cout << "三角形不成立" << endl;
	return 0;
	
}