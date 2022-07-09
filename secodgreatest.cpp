#include <iostream>
using namespace std;
main(){
	int a,b,c;
	cout<<"enter value of a b and c respectively : ";
	cin>>a>>b>>c;
	
	if(a>b&&a>c){
		if(b>c){
			cout<<"b is second greatest";
		}
		else{
			cout<<"c is second greatest";
		}
	}
	if(b>c&&b>a){
		if(a>c){
			cout<<"a is second greatest";
		}
		else{
			cout<<"c is second greatest";
		}
	}
	if(c>b&&c>a){
		if(a>b){
			cout<<"a is second greatest";
		}
		else{
			cout<<"b is second greatest";
		}
	}
}
