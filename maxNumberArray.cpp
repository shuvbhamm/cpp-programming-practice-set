#include <iostream>
using namespace std;
main(){
    int a[5],i,max;
    for(i=0;i<5;i++){
        cout<<"enter number : ";
        cin>>a[i];
    }
    max=a[0];
    for(i=0;i<5;i++){
        if(max<a[i]){
            max=a[i];
        }
    }
    cout<<"max number : "<<max;
}