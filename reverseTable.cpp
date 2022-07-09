#include <iostream>
using namespace std;
main(){
	int table;
	cout<<"Enter the number you want reverse table of : ";
	cin>>table;
	for(int n=10;n>=1;n--){
		cout<<n*table<<"\n";
	}
}
