#include<iostream>
using namespace std;
void asd(double a[],int listsize)
{
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j < (listsize - 1); j++)
			if (a[j] > a[j + 1])
			{
				double temp;
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
				changed = true;
			}
	} while (changed);
	for (int i = 0;i < listsize;i++)
	{
		cout << a[i] << " ";

	}
}
int main()
{
	const int listsize = 10;
	double a[listsize];
	for(int i=0;i<listsize;i++)
	{
		cin >> a[i];

	}
	
	asd(a, listsize);
}