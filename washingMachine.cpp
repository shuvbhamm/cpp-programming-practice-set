#include <iostream>
using namespace std;
main()
{
	int time,weight;
	cout<<"Enter weight of clothes in grams : ";
	cin>>weight;
	
	if(weight>=0&&weight<=7000)
	{
		if(weight>=0&&weight<=2000)
		{
			time=25;
			cout<<"\nlow level water";
			cout<<"\nTime Estimated : "<<time<<" Minutes";
		}
		else if(weight>=2001&&weight<=4000)
		{
			time=35;
			cout<<"\nmedium level water";
			cout<<"\nTime Estimated : "<<time<<" Minutes";
		}
		else if(weight>4000)
		{
			time=45;
			cout<<"\nhigh level water";
			cout<<"\nTime Estimated : "<<time<<" Minutes";
		}
	}
	else if(weight>7000)
	{
		cout<<"\nOVERLOADED";
	}
	else{
		cout<<"Invalid Input";
	}
	
}
