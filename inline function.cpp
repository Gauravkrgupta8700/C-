#include<iostream>
using namespace std;
inline void fun();
int main ()
{
	cout<<"you are in main"<<endl;
	fun();
}
void fun()
{
	cout<<"you are in fun function";
}
