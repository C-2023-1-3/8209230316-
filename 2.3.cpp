#include<iostream>
using namespace std;
int main ()
{
	double a, b, c;
	cin >> a >> b >> c;
	if (a + c > b && a + b > c && b + c > a) {
		double d = a + b + c;
		cout << d << endl;
		if (a == b || a == c || b == c) { cout << "����һ������������" << endl; }
		else cout << "�ⲻ��һ������������" << endl;
	}
	else cout << "�����β�����" << endl;
	return 0;
	
}