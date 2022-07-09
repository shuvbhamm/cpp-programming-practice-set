#include <iostream>
using namespace std;
void armStrong(){
    int n,sum=0,check;
    cout<<"enter number to check Armstrong : ";
    cin>>n;
    check=n;
    while(n!=0){
        int b=n%10;
        sum=sum+(b*b*b);
        n=n/10;
    }
    if(sum==check){
        cout<<"\nArmstrong Number";
    }
    else{
        cout<<"\nNot Armstrong Number";
    }
}
void primeNumber(){
    int n,count=0;
    cout<<"\nenter number to check prime : ";
    cin>>n;
    for(int i=1;i<=(n/2);i++){
        if(n%i==0){
            count++;
        }
    }
    if(count==1){
        cout<<"\nPrime number";
    }
    else{
        cout<<"\nNot Prime";
    }
}
main(){
    armStrong();
    primeNumber();
}