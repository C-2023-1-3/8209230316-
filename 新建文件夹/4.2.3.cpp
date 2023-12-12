#include<iostream>
using namespace std;

void asd(int a,int s1[])
{for(int i=0;i<a-1;i++)
{
	for (int j = 0;j<a-1-i;j++)
	{
		if (*(s1 + j) > *(s1 + j + 1))
		{
			int temp;
			temp = *(s1 + j);
			*(s1 + j) = *(s1 + j + 1);
			*(s1 + j + 1) = temp;

		}
	}
}
for(int i=0;i<a;i++)
{
	cout << s1[i] << " ";
}
}
int main()
{
	int size;
	
	cout << "输入数组元素的数量：";
	cin >> size;
	int* s1 = new int[size];
		for(int i = 0;i < size;i++)
		{
			cin >> *(s1 + i);
		}
		asd(size, s1);
		
}