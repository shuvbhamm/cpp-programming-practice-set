#include <iostream>
using namespace std;
main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            cout<<j;
        }
        for(int j=5;j>=1;j--){
            cout<<j;
        }
        cout<<"\n";
    }
}
// 1234554321
// 1234554321
// 1234554321
// 1234554321
// 1234554321