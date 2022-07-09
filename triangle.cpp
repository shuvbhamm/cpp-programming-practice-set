#include <iostream>
using namespace std;
main(){
	int a,b,c;	//a b c are sides of triangle
	
	cout<<"enter sides of triangle : ";
	cin>>a>>b>>c;
	
	if(a==b&&a==c){
		cout<<"\nEQUILATERAL TRIANGLE "; //all sides equal
	}
	else if(a==b||a==c){
		cout<<"\nISOSCLES TRIANGLE"; //two sides equal
	}
	else{
		cout<<"\nSCALENE TRIANGLE"; //no sides equal
	}
	
}
