#include <iostream>
using namespace std;
main(){
    int a[5],i;
    for(i=0;i<5;i++){
        cout<<"enter number : ";
        cin>>a[i];
    }
    for(i=0;i<4;i++){
        if(a[i+1]-a[i]==1){
            cout<<"\n"<<a[i]<<" and "<<a[i+1]<<" : contagious";
        }
        else if(a[i+1]-a[i]==0){
            cout<<"\n"<<a[i]<<" : repeat";
        }
        else{
            int n=a[i+1]-a[i];
            int temp=a[i]+1;
            while(n>=2){
                cout<<"\n"<<temp++<<" : missing";
                n--;
            }
        }
    }
}
