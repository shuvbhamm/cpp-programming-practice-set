#include <iostream>
using namespace std;
main(){
    for(int i=1;i<=5;i++){
        for(int j=4;j>=i;j--){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*"<<" ";
        }
        cout<<"\n";
    }
}
//     * 
//    * *
//   * * *
//  * * * *
// * * * * *