#include <iostream>
using namespace std;
main(){
	int a,b,sum=0;
	cout<<"Enter the range to print its sum of even number : ";
	cin>>a>>b;
	for(int n=a;n<=b;n++){
		if(n%2==0){
			sum=sum+n;
		}
	}
	cout<<"\nsum of all even numbr between "<<a<<" and "<<b<<" = "<<sum;
}
