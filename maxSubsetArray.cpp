#include <iostream>
using namespace std;
main(){
    int a[10],i,subset,max;
    cout<<"enter subset : ";
    cin>>subset;
    cout<<"\n";
    for(i=0;i<10;i++){
        cout<<"enter number : ";
        cin>>a[i];
    }
    max=a[0];
    for(i=0;i<10;i++){
        // in programming 0 is divisible by all thats why i!=0 statement is used
        if(i%subset==0 && i!=0){
            cout<<"\nmax : "<<max;
            max=a[i];
        }
        if(max<a[i]){
            max=a[i];
        }
    }
    cout<<"\nmax : "<<max;
}