#include <iostream>
using namespace std;
main(){
    int a[10],i,subset,sum=0;
    cout<<"enter subset : ";
    cin>>subset;
    cout<<"\n";
    for(i=0;i<10;i++){
        cout<<"enter number : ";
        cin>>a[i];
    }
    for(i=0;i<10;i++){
        // in programming 0 is divisible by all thats why i!=0 statement is used
        if(i%subset==0 && i!=0){
            cout<<"\nsum : "<<sum;
            sum=0;
        }
        sum=sum+a[i];
    }
    cout<<"\nsum : "<<sum;
}