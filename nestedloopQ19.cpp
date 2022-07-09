#include <iostream>
using namespace std;
main(){
    for(int i=5;i>=1;i--){
        for(int j=1;j<2*i;j++)
        {
            cout<<j;
        }
        cout<<"\n";
    }
}
// 123456789
// 1234567
// 12345
// 123
// 1