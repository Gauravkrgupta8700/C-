#include<iostream>
using namespace std;
int main()
{
	int l,b,i,j;
	cout<<"enter rectangular pattern"<<endl;
	cout<<"enter length of a rectangle"<<endl;
	cin>>l;
	cout<<" enter breadth of a rectangle"<<endl;
	cin>>b;
	for(i=1;i<=l;i++)
	{
		for(j=1;j<=b;j++)
		{
		cout<<"*";
	    
		
		  if(j==b)
	     cout<<"\n";
	 }
	 	}
	
	return 0;
}

