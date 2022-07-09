#include <iostream>
using namespace std;
struct math{
    int m1,m2;
};
main(){
    math marks;
    cout<<"enter first marks : ";
    cin>>marks.m1;
    cout<<"enter second marks : ";
    cin>>marks.m2;
    cout<<"\nSum = "<<marks.m1 + marks.m2;
}