#include<iostream>
using namespace std;
int asd(int a)
{
	return (a + 1) * 2;
}
int main()
{
	int a=1,b=1;
for(int i=0;i<9;i++)
{int b = asd(a);
int temp;
 temp=b;
 b = a;
 a = temp;

}
cout << a << endl;
}