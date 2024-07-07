#include<iostream>
using namespace std;
int area(int,int);
float area(int);

	int main()
{
	int r, l,b,c;
		float a;
		cout<<"enter radius of circle"<<endl;
		cin>>r;
		a= area(r);
		cout<<" area of circle is :- "<<a<<endl;
		cout<<"enter length & breadth of rectangle"<<endl;
		cin>>l>>b;
		c= area(l,b);
				cout<<" area of recatangle is :- "<<c<<endl;
		return 0;
	}
	float area(int r)
	{
		return (3.14*r*r);
	}
	int area (int l, int b)
	{
	return (l*b);
	}
