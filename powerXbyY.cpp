#include <iostream>
#include <math.h>
using namespace std;
main(){
    int x,y,p1=1,p2=0;
    float sum=0;
    cout<<"enter x and y : ";
    cin>>x>>y;
    for(p1=1;p1<=5;p1++){
        cout<<(pow(x,p1)/pow(y,p2))<<"\n";
        sum+=(pow(x,p1)/pow(y,p2));
        p2++;
    }
    cout<<"\nSum = "<<sum;
}