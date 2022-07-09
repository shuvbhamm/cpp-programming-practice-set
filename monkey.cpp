#include <iostream>
using namespace std;
int main(){
	
	int banana,monkey,eat,bananaLeft,bhukheMonkey,monkeyEaten;
	
	cout<<"enter banana monkey and eat respectively : ";
	cin>>banana>>monkey>>eat;
	
	monkeyEaten=(banana/eat);
	bananaLeft=banana%eat;
	bhukheMonkey=monkey-monkeyEaten;
	
	cout<<"\n\nTotal BANANA : "<<banana;
	cout<<"\nTotal MONKEY : "<<monkey;
	cout<<"\n1 MONKEY can EAT only : "<<eat<<" bananas.";
	cout<<"\nBANANA left : "<<bananaLeft;
	cout<<"\nMonkey did'nt eaten are : "<<bhukheMonkey;
	
	return 0;
}
