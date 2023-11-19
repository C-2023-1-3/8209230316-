#include<iostream>
using namespace std;
int main()
{
	
	while (1) {double x, y;
	char a;
	cin >> x >> a >> y;

		if (a == '+')
			cout << x << '+' << y << '=' << x + y << endl;

		if (a == '-')
			cout << x << '-' << y << '=' << x - y << endl;


		if (a == '*')
			cout << x << '*' << y << '=' << x * y << endl;

		if (a == '/') {
			if (y == 0)

				cout << "´íÎó" << endl;
			else cout << x << '/' << y << '=' << x / y << endl;

		}
		if (a == '%')
			cout << x << '%' << y << '=' << (int)x % (int)y << endl;
		if (a != '+' && a != '-' && a != '*' && a != '/' && a != '%')
			cout << "Ê§°Ü" << endl;
		
	}
	return 0;
		
		
	
}
	