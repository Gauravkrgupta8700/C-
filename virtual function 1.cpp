#include<iostream>
using namespace std;
int main()
{
	float amount;
	float value( float p, int n,float r=0.15); //prototype
	void printline(char ch='*', int lens=40);  //prototype
	printline();
	amount= value(5000.00,5);
	cout<<endl;
	cout<<" final values :- "<<amount<<endl;
	printline('=');// user default value for second argument
	
}
void printline(char ch,int lens)
{
	for(int i=1;i<=lens;i++)
	cout<<ch;
	cout<<endl;
}
	float value( float p, int n,float r=0.15)
	{
		int year=1;
		float sum=p;
		while(year<=n)
		{
			sum=sum*(1+r);
			year = year+1;
		}
		return(sum);
	}
