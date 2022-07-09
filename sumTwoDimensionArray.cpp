#include <iostream>
using namespace std;
main(){
    int a[3][3],i,j,sum=0;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<"enter number : ";
            cin>>a[i][j];
            sum=sum+a[i][j];
        }
    }
    for(i=0;i<3;i++){
        cout<<"| ";
        for(j=0;j<3;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<"|\n";
    }
    cout<<"sum of 2d array : "<<sum;
}