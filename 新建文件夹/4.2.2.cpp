#include<iostream>
#include<cmath>
using namespace std;
int parseHex(const char* const s1)
{
	
	int num = strlen(s1);
	int a[99];
	int b = 0;
	for (int i = 0;i < num;i++)
	{
		if (s1[i] >= '0' && s1[i] <= '9')
		{
			a[i] = (s1[i] - 48) * pow(16, num - i - 1);
		}
		if (s1[i] >= 'A' && s1[i] <= 'F')
		{
			a[i] = (s1[i] - 55) * pow(16, num - i - 1);
		}
		b += a[i];
	}return b;
	
	
}
int main()
{
	const int size = 99;
	char s1[size];
	cout << "输入16进制数字:";
	cin.getline(s1, size);
	cout << "输出10进制数字:" << parseHex(s1);


}