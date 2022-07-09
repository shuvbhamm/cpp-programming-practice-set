#include <iostream>
using namespace std;
main(){
	int maxCandy=10,minCandy=5,order,candyLeft;
	cout<<"Enter your order for candy : ";
	cin>>order;
	if(order>=1&&order<=minCandy){
		candyLeft=maxCandy-order;
		cout<<"\nNUMBER OF Candies SOLD : "<<order;
		cout<<"\nNUMBER of Candies LEFT : "<<candyLeft;
	}
	else{
		cout<<"\nINVALID INPUT";
		cout<<"\nNUMBER of Candies LEFT : "<<maxCandy;
	}
}
