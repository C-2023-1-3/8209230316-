#include<iostream>
using namespace std;
int main ()
{
	int a, b,c,d;
	cin >> a >> b;
	for(int e=1;e<=a&&e<=b;e++ )
	{
		if ( a%e==0&&b%e==0)
		{
			c = e;
		}
	}
	for (int e=1;;e++)
	{
		if (e % a == 0 && e % b == 0)
		{
			d = e;break;
		}
	}
	cout << "���Լ��" << c << endl;
	cout << "��С������" << d << endl;
	return 0;

}