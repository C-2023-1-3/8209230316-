#include<iostream>
using namespace std;
class Point
{
public:
	Point()
	{
		x = 60;
		y = 80;
	}
	void setpoint(int i, int j)
	{
		x += i;
		y += j;
	}
	void display()
	{
		cout << "(" << x << "," << y<<")";
	}
private:
	int x;
	int y;
};
int main()
{
	Point p;
	p.display();
	p.setpoint(20, 50);
	p.display();
}
