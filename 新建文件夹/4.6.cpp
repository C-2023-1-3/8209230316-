#include<iostream>
#include<string>
using namespace std;
void count(const char s[], int counts[])
{
	for (int i = 0; i < 26; i++)
	{
		counts[i] = 0;
	}
	int a= strlen(s);
	for (int i = 0; i <a; i++)
	{
		counts[s[i] - 'a']++;
		if (s[i] >= 'A' && s[i] <= 'Z')
		{
			counts[s[i] - 'A']++;
		}

	}
	for (int j = 0; j < 26; j++)
	{
		if (counts[j] != 0)
		{
			cout << char(j + 'a') << " £º " << counts[j] << "times" << endl;
		}
	}
}

int main()
{
	char a[99];
	int counts[26];

	cout << "Enter a string:";

	int  b= strlen(a);

	cin.getline(a, b);

	count(a, counts);


	return 0;
}