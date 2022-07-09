#include <iostream>
using namespace std;
main(){
    int n,b,check,rev=0,sum=0,sumCheck;
    cout<<"Enter any number to check magic number : ";
    cin>>n;
    check=n;
    while(n!=0){
        b=n%10;
        sum=sum+b;
        n=n/10;
    }
    sumCheck=sum;
    while(sum!=0){
        b=sum%10;
        rev=rev*10+b;
        sum=sum/10;
    }
    if(rev*sumCheck==check){
        cout<<"\nMagic Number";
    }
    else{
        cout<<"\nNot Magic Number";
    }
}