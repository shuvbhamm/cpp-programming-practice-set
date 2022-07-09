#include <iostream>
using namespace std;
main(){
    int a[5],i,first,sum=0;
    for(i=0;i<5;i++){
        cout<<"enter number : ";
        cin>>a[i];
    }
    for(i=0;i<5;i++){
        while(a[i]!=0){
            first=a[i]%10;
            a[i]=a[i]/10;
        }
        sum=sum+first;
    }
    cout<<"sum of first digit : "<<sum;
}