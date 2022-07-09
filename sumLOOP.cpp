#include <iostream>
using namespace std;
main(){
	int a,b,sum=0;
	cout<<"Enter the range for its sum : ";
	cin>>a>>b;
	for(int n=a;n<=b;n++){
		sum=sum+n;
	}
	cout<<"\nsum of numbers in range "<<a<<" and "<<b<<" = "<<sum;
}
