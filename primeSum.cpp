#include <iostream>
using namespace std;
main(){
    int r1,r2,c=0,sum=0;
    cout<<"enter range : ";
    cin>>r1>>r2;
    for(int i=r1;i<=r2;i++){
        for(int j=1;j<=(i/2);j++){
            if(i%j==0){
                c++;
            }
        }
        if(c==1){
            cout<<i<<" : prime number\n";
            sum=sum+i;
        }
        else{
            cout<<i<<" : not prime\n";
        }
        c=0;
    }
    cout<<"\nsum of prime number = "<<sum;
}