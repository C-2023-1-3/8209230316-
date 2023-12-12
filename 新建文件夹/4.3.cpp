#include<iostream>
using namespace std;
int main()
{
	const int size = 100;
	bool a[size];
	for (int i = 0;i < size;i++)
	{
		a[i] = false;
	}
	for (int i = 0;i < size;i++)
	{
		a[i] = true;
	}
	for (int i = 1;i <size;i++)
	{
		for (int j = i;j <size;j += i + 1)
		{
			
			if (a[j])
			{
				a[j] = false;
			}
			else  a[j] = true;
		}
	}
	for (int i = 0;i < size;i++)
	{
		if (a[i])
			cout << i + 1 << " ";
	}
	cout << endl;
	return 0;
}