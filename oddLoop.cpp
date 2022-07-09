#include <iostream>
using namespace std;
main(){
	int a,b;
	cout<<"Enter the range for you want odd number : ";
	cin>>a>>b;
	for(int n=a;n<=b;n++){
		if(n%2!=0){
			cout<<n<<"\n";
		}
	}
}
