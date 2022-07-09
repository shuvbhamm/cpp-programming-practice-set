#include <iostream>
using namespace std;
main(){
	int a,b,c;
	cout<<"Enter a b and c respectively : ";
	cin>>a>>b>>c;
	if(a>b&&a>c){
		cout<<a<<" a is greatest";
	}
	if(b>a&&b>c){
		cout<<b<<" b is greatest";
	}
	if(c>b&&c>a){
		cout<<c<<" c is greatest";
	}
}
