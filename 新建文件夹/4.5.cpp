#include<iostream>
#include<string>
using namespace std;
int indexOf( char s1[], char s2[])
{
	int a = strlen(s2);
	int b = strlen(s1);
	
	
	bool e[100];
	for (int i = 0;(i < a - b + 1)&&(i<b);i++)
	{   int d = 0;
		for (int j = i;j < b + i;j++)
		{
			e[j - i] = 0;
			if (s1[j - i] == s2[j])
			{   
				e[j - i] = 1;
				d++;
				
			}
		}
		

		for (int f = 0;f < b;f++)
		{
			if (e[f] == 0 && i == a - b + 1)
			{
				return -1;
			}
		}
if (d == b)
		{
			return i+1;
		}
	}
		
}
int main()
{
	
	char s1[99];
	char s2[99];
	cout << "Enter the first string";
	cin.getline(s1, 99);
	cout << "Enter the second string";
	cin.getline(s2, 99);

	cout<<indexOf(s1, s2);




	

}