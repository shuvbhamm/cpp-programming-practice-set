#include <iostream>
using namespace std;
int main(){
	int a,b,c;
	cout<<"enter a and b respectively : ";
	cin>>a>>b;
	cout<<"\na before swap : "<<a<<"\nb before swap : "<<b;
	c=a;
	a=b;
	b=c;
	cout<<"\n\na after swap : "<<a<<"\nb before swap : "<<b;
	return 0;
}
