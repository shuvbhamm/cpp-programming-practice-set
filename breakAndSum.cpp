#include <iostream>
using namespace std;
main(){
    int n,sum=0;
    cout<<"Enter any nummber : ";
    cin>>n;
    while(n!=0){
        int b=n%10;
        sum=sum+b;
        cout<<"\n"<<b;
        n=n/10;
    }
    cout<<"\nSum : "<<sum;
}