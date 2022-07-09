#include <iostream>
using namespace std;
main(){
    int a[5],i,left=0,right=0,n,position;
    for(i=0;i<5;i++){
        cout<<"enter number : ";
        cin>>a[i];
    }
    cout<<"enter number for search : ";
    cin>>n;
    for(i=0;i<5;i++){
        if(a[i]==n){
            position=i;
        }
    }
    // left sum
    for(i=0;i<position;i++){
        left=left+a[i];
    }
    cout<<"\nleft sum : "<<left;
    // right sum
    for(i=position+1;i<=4;i++){
        right=right+a[i];
    }
    cout<<"\nright sum : "<<right;
    if(left>right){
        cout<<"\nLEFT";
    }
    else{
        cout<<"\nRIGHT";
    }
}