#include <iostream>
using namespace std;
main(){
    int n,cnt=0;
    cout<<"enter number to check its prime or not : ";
    cin>>n;
    for(int i=1;i<=(n/2);i++){
        if(n%i==0){
            cnt++;
        }
    }
    
    // prime nummber loop if run btwn 1 and (n/2) then divisor count should be only 1
    // if divisor count is more than 1 then it is not prime number,

    if(cnt==1){
        cout<<"\nprime number";
    }
    else{
        cout<<"\nNot Prime";
    }
}