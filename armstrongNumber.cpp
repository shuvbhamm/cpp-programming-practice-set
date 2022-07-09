#include <iostream>
using namespace std;
main(){
    int n,b,sum=0,check;
    cout<<"enter any number : ";
    cin>>n;
    check=n;
    while(n!=0){
        b=n%10;
        sum=sum+(b*b*b);
        n=n/10;
    }
    cout<<"Sum : "<<sum;
    if(check==sum){
        cout<<"\nArmstrong nummber";
    }
    else{
        cout<<"\nNot an Armstrong number";
    }
}