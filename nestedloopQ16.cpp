#include <iostream>
using namespace std;
main(){
    int cnt=10;
    for(int i=1;i<=4;i++){
        for(int j=1;j<=i;j++){
            cout<<cnt--<<"\t";
        }
        cout<<"\n";
    }
}
/*
10
9   8
7   6   5
4   3   2   1
*/