#include <iostream>
using namespace std;
main(){
	int call,bill,extraCall;
	cout<<"Enter the minutes you have talked : ";
	cin>>call;
	if(call>=1&&call<=100){
		cout<<"\nYour BILL is : 200 Rs";
	}
	if(call>=101&&call<=200){
		extraCall=call-100;
		bill=200+3*extraCall;
		cout<<"Your BILL is : "<<bill<<" Rs";
	}
	if(call>=201&&call<=300){
		extraCall=call-200;
		bill=500+4*extraCall;
		cout<<"Your BILL is : "<<bill<<" Rs";
	}
	if(call>300){
		extraCall=call-300;
		bill=900+5*extraCall;
		cout<<"Your BILL is : "<<bill<<" Rs";
	}
}
