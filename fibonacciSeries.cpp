#include <iostream>
using namespace std;
main(){
    int a,b,c,cnt=1;
    a=0,b=1;
    for(cnt=1;cnt<=20;cnt++){
        cout<<a<<"  ";
        c=a+b;
        a=b;
        b=c;
    }

}