#include <iostream>
using namespace std;
main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        for(int j=i-1;j>=1;j--){
            cout<<j;
        }
        cout<<"\n";
    }
}
// 1
// 121
// 12321
// 1234321
// 123454321