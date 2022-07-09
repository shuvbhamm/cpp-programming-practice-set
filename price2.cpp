#include <iostream>
using namespace std;
int main(){
	float a,b,c,total,dis,act;
	cout<<"enter items price : ";
	cin>>a>>b>>c;
	total=a+b+c;
	cout<<"\nbefore discount : "<<total<<" Rs";
	dis=total*10/100;
	cout<<"\ndiscount price : "<<dis<<" Rs";
	act=total-dis;
	cout<<"\nAfter discount : "<<act<<" Rs";
	return 0;
}
