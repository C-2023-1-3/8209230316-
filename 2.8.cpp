#include<iostream>
using namespace std;
int main ()
{
	while (1)
	{
		double a, b, c, d;
		cin >> a;
		c = a;
		if (a > 0)
		{
			do {
				b = (a + c / a) / 2;
				d = a;
				a = b;
				b = d;

			} while (a - b >= 1e-5 || a - b <= -1e-5);
			cout << a << endl;
		}
		else cout << "´íÎó" << endl;
		
	}
	return 0;

}