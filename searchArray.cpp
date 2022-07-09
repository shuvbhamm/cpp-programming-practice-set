#include <iostream>
using namespace std;
main(){
    int a[5],i,n;
    for(i=0;i<5;i++){
        cout<<"enter number : ";
        cin>>a[i];
    }
    cout<<"\nEnter any number for search : ";
    cin>>n;
    for(i=0;i<5;i++){
        if(a[i]==n){
            cout<<"position : "<<i+1<<"\n";
        }
    }
}