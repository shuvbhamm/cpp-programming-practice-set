#include <iostream>
using namespace std;
main(){
    int n,max=0,b;
    cout<<"Enter any number : ";
    cin>>n;
    while(n!=0){
        b=n%10;
        cout<<"\n"<<b;
        if(b>max){
            max=b;
        }
        n=n/10;
    }
    cout<<"\nmax : "<<max;
}