#include <iostream>
using namespace std;
class complex{
    private:
        int real,imag;
    public:
        void input();
        friend complex operator+(complex c1,complex c2);
        friend complex operator-(complex c1,complex c2);
        friend complex operator*(complex c1,complex c2);
        void display();
};
void complex::input(){
    cout<<"enter complex number  : ";
    cin>>real>>imag;
}
void complex::display(){
    cout<<"\n------------Result-------------\n";
    cout<<real<<"+"<<imag<<"i";
}
complex operator+(complex c1,complex c2){
    complex c3;
    c3.real=c1.real+c2.real;
    c3.imag=c1.imag+c2.imag;
    return c3;
}
complex operator-(complex c1,complex c2){
    complex c3;
    c3.real=c1.real-c2.real;
    c3.imag=c1.imag-c2.imag;
    return c3;
}
complex operator*(complex c1,complex c2){
    complex c3;
    c3.real=(c1.real*c2.real)-(c1.imag*c2.imag);
    c3.imag=(c1.real*c2.imag)+(c1.imag*c2.real);
    return c3;
}
main(){
    complex c1,c2,c3;
    c1.input();
    c2.input();
    c3=c1+c2;
    c3.display();
    c3=c1-c2;
    c3.display();
    c3=c1*c2;
    c3.display();
}