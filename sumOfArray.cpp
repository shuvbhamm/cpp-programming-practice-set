#include <iostream>
using namespace std;
main(){
    int a[5],i,sum=0;
    for(i=0;i<5;i++){
        cout<<"enter number : ";
        cin>>a[i];
    }
    for(i=0;i<5;i++){
        sum=sum+a[i];
    }
    cout<<"sum of array : "<<sum;
}