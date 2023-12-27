#include<iostream>
using namespace std;
class Cube
{
public:
	void set()
	{
		cout << "长方体的长，宽。高分别为";
		cin >> length;
		cin >> width;
		cin >> height;
		v = length * width * height;
	}
	void show()
	{
		cout <<"长方体体积="<< v;
	}
private:
	int length;
	int width;
	int height;
	int v;
};
void test01()
{
	Cube c1;
	c1.set();
	c1.show();
}
int main()
{
	for(int i=0;i<3;i++)
	{
		test01();
	}
	return 0;
}