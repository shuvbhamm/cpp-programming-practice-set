#include <iostream>
using namespace std;
main(){
    int a[3][3],b[3][3],c[3][3],i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<"enter number for 1st array : ";
            cin>>a[i][j];
        }
    }
    cout<<"\n";
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<"enter number for 2nd array : ";
            cin>>b[i][j];
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<c[i][j]<<"\t";
        }
        cout<<"\n";
    }

}