#include<iostream>
using namespace std;
int swap(int *, int *);
int main ()
{
	int a=5,b=8;
    cout<<" before swapping a is :- "<<a<<" b :- "<<b<<endl;
	int s=swap(&a,&b);
	cout<<"after swapping a is :- "<<a<<" b :- "<<b;
	return 0;
}
int swap(int *x, int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
