/*
54321
5432
543
54
5
*/
#include <iostream>
using namespace std;
main(){
    for(int i=1;i<=5;i++){
        for(int j=5;j>=i;j--){
            cout<<j;
        }
        cout<<"\n";
    }
}