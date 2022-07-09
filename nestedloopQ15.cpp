#include <iostream>
using namespace std;
main(){
    int cnt=1;
    for(int i=1;i<=4;i++){
        for(int j=1;j<=i;j++){
            cout<<cnt++<<"\t";
        }
        cout<<"\n";
    }
}
/*
1
23
456
78910
*/