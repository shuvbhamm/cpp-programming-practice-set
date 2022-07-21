#include <iostream>
using namespace std;
class Data{
    private:
        int a,b;
    public:
        void input(){
            cout<<"enter a and b : ";
            cin>>a>>b;
        }
        void add(Data d2){
            // a=a+d2.a;
            // b=b+d2.b;
            cout<<"\nsum of a : "<<a+d2.a<<"\nsum of b : "<<b+d2.b;
        }
        void mul(Data d2){
            // a=a*d2.a;
            // b=b*d2.b;
            cout<<"\nmul of a : "<<a*d2.a<<"\nmul of b : "<<b*d2.b;
        }
};
main(){
    Data d1,d2;
    d1.input();
    d2.input();
    d1.add(d2);
    d1.mul(d2);
}