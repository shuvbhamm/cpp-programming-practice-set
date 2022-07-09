#include <iostream>
using namespace std;
main(){
    for(int i=1;i<=5;i++){
        for(int j=1;j<2*i;j++)
        {
            cout<<j;
        }
        cout<<"\n";
    }
}
// 1
// 123
// 12345
// 1234567
// 123456789