#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float F;
	cin >>F;
	float C = (F - 32) * 5 / 9.00;
	cout <<setiosflags(ios::fixed)<< setprecision(2)<<C<<endl;
}