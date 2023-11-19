#include<iostream>
using namespace std;
int main()
{
	char a;
	int num = 0, letter = 0, space = 0, other = 0;
	
	 while ((a=getchar())!= '\n');{
		
		
		if (a >= 'a' && a <= 'z' || a >= 'A' && a <= 'Z') { letter++; }
		else if (a == ' ') { space++; }
		else if (a >= '0' && a <= '9') { num++; }
		else other++; 

	} 
	cout << "num:" << num << "letter:" << letter << "space:" << space << "other:" << other << endl;
	
}