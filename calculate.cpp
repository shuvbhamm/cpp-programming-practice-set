#include <iostream>
using namespace std;
main(){
	int a,b,c,choice;
	cout<<"Enter any 2 number : ";
	cin>>a>>b;
	cout<<"\n1 : Addition\n2 : Subtraction\n3 : Multiplication \n\nEnter your choice : ";
	cin>>choice;
	
	switch(choice){
		case 1 :
			c=a+b;
			cout<<"addition = "<<c;
			break;
		case 2 :
			c=a-b;
			cout<<"subtraction = "<<c;
			break;
		case 3 :
			c=a*b;
			cout<<"multiplication = "<<c;
			break;
		default :
			cout<<"Invalid input";
	}
}
