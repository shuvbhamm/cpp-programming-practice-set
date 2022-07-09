/*
10101
1010
101
10
1
*/
#include <iostream>
using namespace std;
main(){
    for(int i=1;i<=5;i++){
        for(int j=5;j>=i;j--){
            cout<<j%2;
        }
        cout<<"\n";
    }
}