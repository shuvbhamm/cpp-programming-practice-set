#include <iostream>
using namespace std;
main()
{
	float i1,i2,i3,total,discount,actual;
	cout<<"Enter items price : ";
	cin>>i1>>i2>>i3;
	total=i1+i2+i3;
	cout<<"\nTotal price = "<<total;
	discount=total*10/100;
	cout<<"\nDiscounted price = "<<discount;
	actual=total-discount;
	cout<<"\nActual price = "<<actual;

}