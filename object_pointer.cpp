#include<stdio.h>
#include<conio.h>
class BOX;
{
	int l,b,h;
	public;
	void set_dimension(int x, int y, int z)
	{
		l=x;
		b=y;
		h=z;
	}
	void show_dimension()
			
	//		cout<<"l ="<<l<<" b = <<b<<"  "<<"h"<<h;
};
void main()
{
	clrscr();
	BOX b1,*p;
	*p=&b1;
	p->set_dimension(55,2,0);
	p->show_dimension();
	getch();
}

