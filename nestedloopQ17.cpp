#include <iostream>
using namespace std;
main(){
    int c=2;
    for(int i=1;i<=4;i++){
        for(int j=1;j<=i;j++){
            cout<<c<<"\t";
            c=c+2;
        }
        cout<<"\n";
    }
}
/*
2
4       6
8       10      12
14      16      18      20
*/