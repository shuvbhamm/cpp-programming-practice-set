#include <iostream>
using namespace std;
main(){
    int a[5],i;
    for(i=0;i<5;i++){
        cout<<"Enter number : ";
        cin>>a[i];
    }
    for(i=4;i>=0;i--){
        cout<<a[i]<<"\n";
    }
}