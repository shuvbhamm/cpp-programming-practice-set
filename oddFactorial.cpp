#include <iostream>
using namespace std;
main(){
    int i,j,fact=1;
    for(i=1;i<=7;i++){
        if(i%2!=0){
            for(j=1;j<=i;j++){
                fact=fact*j;
            }
            cout<<fact<<"\n";
        }
        fact=1;
    }
}