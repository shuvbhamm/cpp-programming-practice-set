#include <iostream>
using namespace std;
main(){
    int a[3][3],i,j,max;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<"enter number : ";
            cin>>a[i][j];
        }
    }
    for(i=0;i<3;i++){
        max=a[i][0];
        for(j=0;j<3;j++){
            if(max<a[i][j]){
                max=a[i][j];
            }
            cout<<a[i][j]<<"\t";
        }
        cout<<"  Max : "<<max<<"\n";
    }

}