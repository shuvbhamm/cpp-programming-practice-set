#include <iostream>
using namespace std;
main()
{
	int length,breadth,area,perimeter;
	cout<<"enter length and breadth \n";
	cin>>length>>breadth;
	area=length*breadth;
	cout<<"Area = "<<area;
	perimeter=2*(length+breadth);
	cout<<"\nPerimetr = "<<perimeter;
}