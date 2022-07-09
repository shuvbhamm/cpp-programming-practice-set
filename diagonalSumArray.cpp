#include <iostream>
using namespace std;
main(){
    int a[3][3],i,j,sum1=0,sum2=0;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<"enter number : ";
            cin>>a[i][j];
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(i==j){
                sum1=sum1+a[i][j];
            }
            if(i+j==2){
                sum2=sum2+a[i][j];
            }
            cout<<a[i][j]<<"\t";
        }
        cout<<"\n";
    }
    cout<<"sum of diagnol (\\) = "<<sum1;
    cout<<"\nsum of diagnol (/) = "<<sum2;
}