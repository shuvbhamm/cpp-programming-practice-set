#include <iostream>
using namespace std;
main(){
	int a,b;
	cout<<"enter the range : ";
	cin>>a>>b;
	cout<<"\nNumber ending with 3 and 5 : \n\n";
	for(int n=a;n<=b;n++){
		if(n%10==3||n%10==5){
			cout<<n<<"\n";
		}
	}
}
