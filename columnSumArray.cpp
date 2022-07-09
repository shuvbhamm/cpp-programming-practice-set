#include <iostream>
using namespace std;
main(){
    int a[3][3],i,j,sum=0;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<"enter number : ";
            cin>>a[i][j];
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<a[i][j]<<"\t";
        }
        cout<<"\n";
    }
    cout<<"=\t"<<"=\t"<<"=\n";
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            sum=sum+a[j][i];
        }
        cout<<sum<<"\t";
        sum=0;
    }
}  