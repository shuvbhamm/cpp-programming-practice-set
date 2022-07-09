#include <iostream>
using namespace std;
main(){
    int a[5],sum=0,i;
    for(i=0;i<5;i++){
        cout<<"enter number : ";
        cin>>a[i];
        if(a[i]%2==0){
            sum=sum+a[i];
        }
    }
    cout<<"\nSum of even number : "<<sum;
}