#include <iostream>
using namespace std;
main(){
    int i,j,fact=1,sum=0;
    for(i=1;i<=7;i++){
        for(j=1;j<=i;j++){
            fact=fact*j;
            sum=sum+fact;
        }
        cout<<fact<<"\n";
        fact=1;
    }
    cout<<"\nsum = "<<sum;
}