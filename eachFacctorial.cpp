#include <iostream>
using namespace std;
main(){
    int fact=1,i,j;
    for(i=5;i>=1;i--){
        for(j=i;j>=1;j--){
            fact=fact*j;
        }
        cout<<fact<<"\n";
        fact=1;
    }
}