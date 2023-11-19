#include<iostream>
using namespace std;
int main()
{
	double x,y;
	while (1)
	{
		cin >> x;
		if(x==0)
		{
			cout << "不存在此定义域" << endl;
		}
		if (x > 0 && x < 1)
		{
			y = 3.0 - 2 * x;
			cout << y << endl;
		}
		if (x >= 1 && x < 5) { y = 0.5/x+1.0; cout << y << endl;
		}
		if (x >= 5 && x < 10) { y = x * x; cout << y << endl;
		}
		
	}
	return 0;
}