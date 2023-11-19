#include<iostream>
using namespace std;
int main()
{
	while (1) {
		char a;
		a = getchar();
		if (a >= 'a' && a <= 'z')
		{
			putchar(a - 32);
		}
		else cout << a + 1 << endl;
		
		system("pause");
		system("cls");
	}return 0;
}