#include <iostream>
using namespace std;

class Demo1;
class Demo2;

class Demo1{
    int a;
    public:
    void input(){
        cout<<"enter A : ";
        cin>>a;
    }
    friend void swap(Demo1 d1,Demo2 d2);
};
class Demo2{
    int b;
    public:
    void input(){
        cout<<"enter B : ";
        cin>>b;
    }
    friend void swap(Demo1 d1,Demo2 d2);
};
void swap(Demo1 d1,Demo2 d2){
    cout<<"\nBefore Swap : "<<"\nA = "<<d1.a<<"\nB = "<<d2.b;
    int temp=d1.a;
    d1.a=d2.b;
    d2.b=temp;
    cout<<"\nAfter Swap : "<<"\nA = "<<d1.a<<"\nB = "<<d2.b;

}
main(){
    Demo1 d1;
    Demo2 d2;
    d1.input();
    d2.input();
    swap(d1,d2);
}
