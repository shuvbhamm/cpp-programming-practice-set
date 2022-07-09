#include <iostream>
using namespace std;
main(){
	int bill,unit;
	cout<<"how much unit you consumed : ";									
	cin>>unit;									
	if(unit>=1&&unit<=100){							
		bill=unit*2;									
		cout<<"\nYour BILL is : "<<bill<<" Rs";									
	}									
	if(unit>=101&&unit<=200){									
		bill=unit*3;									
		cout<<"\nYour BILL is : "<<bill<<" Rs";									
	}									
	if(unit>=201&&unit<=300){									
		bill=unit*3;									
		cout<<"\nYour BILL is : "<<bill<<" Rs";									
	}									
	if(unit>300){									
		bill=unit*5;									
		cout<<"\nYour BILL is : "<<bill<<"Rs";									
	}
}
