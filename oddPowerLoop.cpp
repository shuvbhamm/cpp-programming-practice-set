#include <iostream>
#include <math.h>
using namespace std;
main(){
	int sum=0;
	for(int i=1;i<=10;i++){
		if(i%2!=0){
			cout<<pow(5,i)<<"\n";
			sum=sum+pow(5,i);
		}
	}
	cout<<"\n\nsum of odd power of 5 : "<<sum;
}

