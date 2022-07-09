#include <iostream>
#include <math.h>
using namespace std;
main(){
	int i,j=2,sum=0;
	for(i=1;i<=5;i++){
		cout<<pow(i,j)<<"\n";
		sum=sum+pow(i,j);
		j++;
	}
    // 1^2 2^3 3^4 4^5
	cout<<"\n\nSum of loop : "<<sum;
}

