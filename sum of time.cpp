#include<iostream>
using namespace std;
class time
{
	int hours, minutes;
	public:
	void get_time(int h, int m)
	{
		hours=h;
		minutes=m;
		}	
		void put_time()
		{
			cout<<hours<<"hours and"<<endl;
			cout<<minutes<<" minutes"<<endl;
		}
		void sum(time t1, time t2)
		{
			minutes=t1.minutes+t2.minutes;
			hours= minutes/60;
			minutes=minutes%60;	
			hours= hours+ t1.hours+t2.hours;
		};
};
int main()
{
	time a1,a2,a3;
	a1.get_time(2,45);
	a2.get_time(3,30);
	a3.sum(a1,a2); //t3=t1+t2
	cout<<" a1 :- ";a1.put_time();
	cout<<" a2 :-";a2.put_time();
	cout<<" a3 :-";a3.put_time();
	return 0;
}
