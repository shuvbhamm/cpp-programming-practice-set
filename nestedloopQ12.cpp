/*
1
01
101
0101
10101
*/
#include <iostream>
using namespace std;
main(){
    for(int i=1;i<=5;i++){
        for(int j=i;j<2*i;j++){
            cout<<j%2;
        }
        cout<<"\n";
    }
}