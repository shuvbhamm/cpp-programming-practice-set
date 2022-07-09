#include <iostream>
using namespace std;
main(){
    int size,i;
    cout<<"enter size : ";
    cin>>size;
    int a[size];
    for(i=0;i<size;i++){
        cout<<"enter number : ";
        cin>>a[i];
    }
    for(i=size-1;i>=0;i--){
        cout<<a[i]<<"\n";
    }
}