#include<iostream>
using namespace std;
int main()
{
	int b[10];
	int a;
	cin >> a;
	b[0] = a;
	int size = 1;
	for (int i = 0;i < 9;i++)
	{
		int c;
		cin >> c;
		bool d = true;
		for (int i = 0;i < size;i++)
		{
			if (c == b[i])
			{
				d = false;
				break;
			}
		}if(d)
		{
			size++;
			b[size - 1] = c;
		}
	}
		for(int i=0;i<size;i++)
		{
			cout << b[i]<<" ";
		}
	}

