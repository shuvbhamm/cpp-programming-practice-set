#include <iostream.h>
#include <conio.h>
main()
{
textbackground(RED);
	int a=4,b=5,add,sub,mul;
	clrscr();

	add=a+b;
	sub=a-b;
	mul=a*b;

	cout<<"Add = "<<add;
	cout<<"\nSubtract = "<<sub;
	cout<<"\nMultiplication = "<<mul;

	getch();
}