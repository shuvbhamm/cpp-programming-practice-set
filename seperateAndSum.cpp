#include <iostream>
using namespace std;
main(){
	int num,first,second,third,fourth,sum;
	
	cout<<"enter any 4 digit number : ";
	cin>>num;
	if(num>=1000&&num<=9999){
		cout<<"\nYES it is a 4 digit number ";
		
		fourth=num%10;
		num=num/10;
		
		third=num%10;
		num=num/10;
		
		second=num%10;
		num=num/10;
		
		first=num%10;
		num=num/10;
		
		sum=first+second+third+fourth;
		cout<<"\n\nsum of 4 digit number is : "<<sum;
		if(sum%2==0){
			cout<<"\nsum is even";
		}
		else{
			cout<<"\nsum is odd";
		}
	}
}
