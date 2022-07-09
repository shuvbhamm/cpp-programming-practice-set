#include <iostream>
using namespace std;
int main(){
	
	int a,b,first,middle,last,sum;
	
	cout<<"enter any 5 digit number : ";
	cin>>a;
	
	last=a%10;
	cout<<"\n"<<last;
	
	a=a/10;
	b=a%10;
	cout<<"\n"<<b;
	
	a=a/10;
	middle=a%10;
	cout<<"\n"<<middle;
	
	a=a/10;
	b=a%10;
	cout<<"\n"<<b;
	
	first=a/10;
	cout<<"\n"<<first;
	
	sum=first+middle+last;
	cout<<"\n\nsum of First Middle Last : "<<sum;
	
	return 0;
	
}
