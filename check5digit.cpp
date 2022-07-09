#include <iostream>
using namespace std;
main(){
	
	int a,b,first,middle,last,sum;
	cout<<"enter any 5 digit number : ";
	cin>>a;
	
	if(a>=10000&&a<=99999)
	{
		cout<<"\nYES it is a 5 digit number ";
		last=a%10;
		
		a=a/10;
		b=a%10;
		
		a=a/10;
		middle=a%10;
		
		a=a/10;
		b=a%10;
		
		first=a/10;
		
		sum=first+middle+last;
		cout<<"\n\nsum of First Middle Last : "<<sum;
	
	}
	else{
		cout<<"not a 5 digit number ";
	}
	
}
