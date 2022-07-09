#include <iostream>
using namespace std;
main(){
	int a;
	cout<<"enter any number : ";
	cin>>a;
	if(a%3==0){
		cout<<a<<" is divisible by 3";
	}
	if(a%3!=0){
		cout<<a<<" is not divisible";
	}
}
