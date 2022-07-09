#include <iostream>
using namespace std;
int main(){
	int a,b;
	cout<<"enter any 5 digit number : ";
	cin>>a;
	b=a%10;
	cout<<"\n"<<b;
	a=a/10;
	b=a%10;
	cout<<"\n"<<b;
	a=a/10;
	b=a%10;
	cout<<"\n"<<b;
	a=a/10;
	b=a%10;
	cout<<"\n"<<b;
	a=a/10;
	b=a%10;
	cout<<"\n"<<b;
	return 0;
}
