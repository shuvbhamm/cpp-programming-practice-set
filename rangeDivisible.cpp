#include <iostream>
using namespace std;
main(){
	int a,b;
	cout<<"Enter the range and check the number divisible by 3 or 5 : ";
	cin>>a>>b;
	for(int n=a;n<=b;n++){
		if(n%3==0||n%5==0){
			cout<<n<<"\n";
		}
	}
}
