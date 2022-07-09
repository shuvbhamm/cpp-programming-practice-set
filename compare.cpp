#include <iostream>
using namespace std;
main(){
	int a,b;
	cout<<"enter a and b respectively : ";
	cin>>a>>b;
	if(a>b){
		cout<<"\na is greater than b";
	}
	if(b>a){
		cout<<"\nb is greater than a";
	}
	if(a==b){
		cout<<"\na and b are equal";
	}
}
