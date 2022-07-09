#include <iostream>
using namespace std;
main(){
    int a[5],i,min;
    for(i=0;i<5;i++){
        cout<<"enter number : ";
        cin>>a[i];
    }
    min=a[0];
    for(i=0;i<5;i++){
        if(min>a[i]){
            min=a[i];
        }
    }
    cout<<"min number : "<<min;
}