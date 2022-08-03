#include <iostream>
using namespace std;
main(){
    int *p = new int;
    int *q = new int;
    int *sum = new int;

    cout<<"enter p : ";
    cin>>*p;
    cout<<"enter q : ";
    cin>>*q;
    *sum=*p+*q;
    cout<<"sum : "<<*sum;

    delete p;
    delete q;
    delete sum;
}