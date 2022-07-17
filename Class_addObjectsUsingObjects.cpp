#include <iostream>
using namespace std;
class math{
    int a,b;
    public:
        void input(){
            cout<<"enter 2 number : ";
            cin>>a>>b;
        }
        void add(math m1,math m2){
            a=m1.a+m2.a;
            b=m1.b+m2.b;
            cout<<"sum : "<<a<<" "<<b;
        }
};
main(){
    math m1,m2,m3;
    m1.input();
    m2.input();
    m3.add(m1,m2);
}