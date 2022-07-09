#include <iostream>
using namespace std;
main(){
    int a[5],i,c=0;
    for(i=0;i<5;i++){
        cout<<"enter number : ";
        cin>>a[i];
    }
    for(i=0;i<5;i++){
        if(a[i]!=a[4-i]){
            c++;
        }
    }
    if(c==0){
        cout<<"\nPalindrome Array";
    }
    else{
        cout<<"\nNot Palindrome Array";
    }
}