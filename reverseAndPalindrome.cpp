#include <iostream>
using namespace std;
main(){
    int n,r=0,b,check;
    cout<<"Enter any number for its reverse : ";
    cin>>n;
    check=n;
    while(n!=0){
        b=n%10;
        r=r*10+b;
        n=n/10;
    }
    cout<<"\nReverse of the number : "<<r;
    if(check==r){
        cout<<"\nIt is a palindrome";
    }
    else{
        cout<<"\nNot a palindrome";
    }
}