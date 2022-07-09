#include <iostream>
using namespace std;
main(){
    int n;
    cout<<"enter number to check its divisor : ";
    cin>>n;
    for(int i=1;i<=(n/2);i++){
        if(n%i==0){
            cout<<i<<"\n";
        }
    }
}