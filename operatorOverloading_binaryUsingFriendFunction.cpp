#include <iostream>
using namespace std;
class math{
    private:
        int a,b;
    public:
        void input();
        friend math operator+(math m1,math m2);
        void display();
};
void math::input(){
    cout<<"enter a and b : ";
    cin>>a>>b;
}
math operator+(math m1,math m2){
    math m3;
    m3.a=m1.a+m2.a;
    m3.b=m1.b+m2.b;
    return m3;
}
void math::display(){
    cout<<"\n-------------Result--------------\n";
    cout<<a<<" "<<b;
}
main(){
    math m1,m2,m3;
    m1.input();
    m2.input();
    m3=m1+m2;
    m3.display();
}