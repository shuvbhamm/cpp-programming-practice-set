#include <iostream>
using namespace std;
int main(){
	int a,b;
	cout<<"enter a and b respectively : ";
	cin>>a>>b;
	cout<<"\na before swap : "<<a<<"\nb before swap : "<<b;
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"\n\na after swap : "<<a<<"\nb before swap : "<<b;
	return 0;
}
