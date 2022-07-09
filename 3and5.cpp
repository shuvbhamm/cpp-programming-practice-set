#include <iostream>
using namespace std;
main(){
	int num;
	cout<<"enter any num : ";
	cin>>num;
	if(num%3==0&&num%5==0){
		cout<<"\ndivisible by both 3 and 5";
	}
	if(num%3==0&&num%5!=0){
		cout<<"\ndivisible by 3 but not by 5";
	}
	if(num%3!=0&&num%5==0){
		cout<<"\ndivisible by 5 but not by 3";
	}
	if(num%3!=0&&num%5!=0){
		cout<<"\nneither divisible by 3 nor 5";
	}
}
