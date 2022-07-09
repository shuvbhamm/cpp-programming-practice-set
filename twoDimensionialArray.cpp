#include <iostream>
using namespace std;
main(){
    int a[3][2],i,j;
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            cout<<"enter number : ";
            cin>>a[i][j];
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
}