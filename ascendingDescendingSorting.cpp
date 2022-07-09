#include <iostream>
using namespace std;
main(){
    int a[10],i,j,temp;
    for(i=0;i<10;i++){
        cout<<"Enter number : ";
        cin>>a[i];
    }
    for(i=0;i<9;i++){
        for(j=i+1;j<10;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    // ascending left
    cout<<"Ascending Left\n";
    for(i=0;i<4;i++){
        cout<<a[i]<<endl;
    }
    // descending right
    cout<<"Descending Right\n";
    for(i=9;i>=5;i--){
        cout<<a[i]<<endl;
    }
}