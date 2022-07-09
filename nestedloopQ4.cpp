/*
1
21
321
4321
54321
*/
#include <iostream>
using namespace std;
main(){
    for(int i=1;i<=5;i++){
        for(int j=i;j>=1;j--){
            cout<<j;
        }
        cout<<"\n";
    }
}