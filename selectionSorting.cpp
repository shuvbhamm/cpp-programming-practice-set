#include <iostream>
using namespace std;
main(){
    int a[5],i,j,temp;
    for(i=0;i<5;i++){
        cout<<"enter number : ";
        cin>>a[i];
    }
    for(i=0;i<4;i++){
        for(j=i+1;j<5;j++){
            if(a[i]>a[j]){  //a[i]>a[j] for ascending and a[i]<a[j] for descending
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<5;i++){
        cout<<a[i]<<"\n";
    }
}