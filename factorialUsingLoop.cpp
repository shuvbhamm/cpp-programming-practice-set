#include <iostream>
using namespace std;
main(){
	int num,fact=1;
	cout<<"Enter the number you want factorial of : ";
	cin>>num;
	for(;num>=1;num--){
		fact=fact*num;
	}
	cout<<"\nFactorial of "<<num<<" is "<<fact;
}
