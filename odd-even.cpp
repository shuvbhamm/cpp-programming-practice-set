#include <iostream>
using namespace std;
main(){
	int a;
	cout<<"Enter any number to check weather it is odd or even : ";
	cin>>a;
	if(a%2==0){
		cout<<a<<" is even number.";
	}
	if(a%2!=0){
		cout<<a<<" is odd number.";
	}
}
