/*
5
45
345
2345
12345
*/
#include <iostream>
using namespace std;
main(){
    for(int i=5;i>=1;i--){
        for(int j=i;j<=5;j++){
            cout<<j;
        }
        cout<<"\n";
    }
}