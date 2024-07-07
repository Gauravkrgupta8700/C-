#include<iostream>
using namespace std;
class employee
{
	char name[30];
	float age;
	public:
		void get_data()
		{
			cout<<"enter name";
			cin>>name;
			cout<<" enter age";
			cin>>age;
			
		}
		void put_data()
		{
			cout<<" enter name :-"<<name<<endl;
			cout<<" age :- "<<age<<endl;
		}
};
const int size=3;
int main()
{
	employee manager[size];
	for(int i=0;i<size;i++)
	{
		cout<<"\n details of manager "<<i+1<<endl;
		manager[i].get_data();
	}
	cout<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<"\n details of manager "<<i+1<<endl;
		manager[i].put_data();
	}
	return 0;
}
