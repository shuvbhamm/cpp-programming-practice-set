// *
//  *
//   *
//    *
//     *
#include <iostream>
using namespace std;
main(){
    for(int i=1;i<=5;i++){
        for(int j=i;j>=1;j--){
            if(j==1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<"\n";
    }
}