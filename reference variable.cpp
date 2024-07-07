#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int x=8;
     
	int &y=x;
    	

	cout<<" x :-"<< x<<endl;
	y++;
	cout<<" y :-"<<y;
return 0;
}
