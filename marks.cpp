#include <iostream>
using namespace std;
main(){
	int m1,m2,m3,percent;
	cout<<"Enter marks of 3 subjects respectively : ";
	cin>>m1>>m2>>m3;
	percent=(m1+m2+m3)*100/300;
	cout<<"\nTotal marks : "<<m1+m2+m3<<"\nPercentage : "<<percent;
	if(percent>=75&&percent<=100){
		cout<<"\nA grade";
	}
	if(percent>=60&&percent<=74){
		cout<<"\nB grade";
	}
	if(percent>=40&&percent<=59){
		cout<<"\nC grade";
	}
	if(percent<40){
		cout<<"\nFAIL";
	}
}
