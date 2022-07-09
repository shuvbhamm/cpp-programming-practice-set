#include <iostream>
using namespace std;
struct calculate{
    int a,b;
};
main(){
    calculate d1,d2,add,mul; //structure object

    cout<<"enter 2 number : ";
    cin>>d1.a>>d1.b;
    cout<<"enter 2 number : ";
    cin>>d2.a>>d2.b;

    add.a = d1.a + d2.a;
    add.b = d1.b + d2.b;
    mul.a = d1.a * d2.a;
    mul.b = d1.b * d2.b;

    cout<<"addition : "<<add.a<<" "<<add.b;
    cout<<"\nmultiplication : "<<mul.a<<" "<<mul.b;
}