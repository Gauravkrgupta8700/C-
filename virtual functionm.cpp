#include<iostream>
using namespace std;
int add(int=0, int=0 , int=0);
int main()
{
	int a, b,c;
	cout<<"enter three number";
	cin>>a>>b>>c;
	cout<<"sum is"<<add()<<endl;
	cout<<"sum is"<<add(a)<<endl;
	cout<<"sum is"<<add(a,b)<<endl;
	cout<<"sum is"<<add(a,b,c);
	return 0;
	}
	int add(int x, int y, int z)
	{
		return (x+y+z);
	}
