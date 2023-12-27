#include<iostream>
using namespace std;
class Time             
{public:
	void set(int hour,int minute,int sec)
	{
		this->hour = hour;
		this->minute = minute;
		this->sec = sec;
	}
	void show()
	{
		cout << hour << ":" << minute << ":" << sec;
	}
private:           
		int hour;
	int minute;
	int sec;
};
void test01()
{
	Time t1;
	t1.set(11,22,33);
	t1.show();
}
int main()
{
	test01();
	/*Time t1;
	cin >> t1.hour;
	cin >> t1.minute;
	cin >> t1.sec;
	cout << t1.hour << ":" << t1.minute << ":" << t1.sec << endl;*/
	return 0;
}
