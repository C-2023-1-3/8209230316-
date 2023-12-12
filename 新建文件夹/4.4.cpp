#include<iostream>
using namespace std;
void merge(const int list1[],int size1,const int list2[],int size2,int list3[])
{  if(size1+size2>80)
{
	cout << "³¬³ö" << endl;
	return;
}
	for (int i = 0;i<size1;i++)
	{
		list3[i] = list1[i];
	}
	for(int i=0;i<size2;i++)
	{
		list3[size1 + i] = list2[i];
	}
	cout << "list3:";
	for (int i = 0;i < size1+ size2;i++)
	{
		cout<< list3[i] << " ";
	}
}
int main()
{
	int a, b;
	int list1[80];
	int list2[80];
	int list3[80];
	cout << "Enter size1:";
    cin >> a;
	cout << "Enter list1:";
	
	for(int i=0;i<a;i++)
	{
		cin >> list1[i];
	}
	cout << "Enter size2:";
		cin >> b;
	cout << "Enter list2:";
	for (int i = 0;i < b;i++)
	{
		cin >> list2[i];
	}
	merge(list1, a, list2, b, list3);
	
}