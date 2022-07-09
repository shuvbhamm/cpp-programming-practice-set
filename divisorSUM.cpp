#include <iostream>
using namespace std;
main(){
    int n,sum=0;
    cout<<"enter number to check its divisor : ";
    cin>>n;
    for(int i=1;i<=(n/2);i++){
        if(n%i==0){
            cout<<i<<"\n";
            sum=sum+i;
        }
    }
    cout<<"\nSum of Divisor = "<<sum;
}