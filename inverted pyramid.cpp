#include<iostream>
using namespace std;
int main()
{

		int n,i;
	cout<<"inverted half pyramid"<<endl;
	cout<<"enter no of rows"<<endl;
	cin>>n;
	//cout<<"enter no of coloumn"<<endl;
	//./-[in>>c;
	for(i=n;i>=1;i--)
	{
	for(int j=1;j<=i;j++)
	{
		cout<<"*";
		}	
		cout<<endl;
}
return 0;
}

