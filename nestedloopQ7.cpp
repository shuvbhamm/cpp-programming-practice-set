/*
5
54
543
5432
54321
*/
#include <iostream>
using namespace std;
main(){
    for(int i=5;i>=1;i--){
        for(int j=5;j>=i;j--){
            cout<<j;
        }
        cout<<"\n";
    }
}