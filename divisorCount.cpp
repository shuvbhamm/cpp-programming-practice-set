#include <iostream>
using namespace std;
main(){
    int n,count=0;
    cout<<"enter number to check its divisor : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            cout<<i<<"\n";
            count++;
        }
    }
    cout<<"\nDivisor Count = "<<count;
}