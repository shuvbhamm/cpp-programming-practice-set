#include <iostream>
#include <math.h>
using namespace std;
main(){
	int i,j=5,sum=0;
	for(i=1;i<=5;i++){
		cout<<pow(i,j)<<"\n";
		sum=sum+pow(i,j);
		j--;
	}
	cout<<"\nSum of Loop : "<<sum;
}

