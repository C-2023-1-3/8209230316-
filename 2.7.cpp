#include<iostream>
using namespace std;
int main ()
{
	for (int i = 0;i < 6;i++)
	{
		for (int a = 0;a < i;a++)
		{
			cout << '*';
		}cout << endl;
	}
	return 0;
}