#include<iostream>
#include<iomanip>

using namespace std;
bool is_prime(int num)
{
	if (num == 2)
	{
		return true;
	}
	
	for (int i = 2;i < num;i++)
	{
		
		if (num % i == 0)

		{
			return false;
		}
	}
	return true;
}
int main()
{
	int n = 0;
	for (int i = 2;n<200;i++)
	{
		if (is_prime(i)==true)
		{
			n++;
			cout<< i<<setw(5);
			if (n % 10 == 0)
		{
			cout << endl;
		}
		}
		
	}
	
	return 0;
}