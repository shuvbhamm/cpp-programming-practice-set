#include <iostream>
using namespace std;
main(){
	int table;
	cout<<"Enter the number you want table of : ";
	cin>>table;
	for(int n=1;n<=10;n++){
		cout<<table<<" x "<<n<<" =  "<<table*n<<"\n";
	}
}
