#include <iostream>
using namespace std;
class complex{
    private:
        int real,img;
    public:
        void input();
        complex add(complex d2);
        complex mul(complex d2);
        void display();
};
void complex::input(){
    cout<<"enter real and imaginary number : ";
    cin>>real>>img;
    // cout<<real<<" + "<<img<<"i"<<endl;
}
complex complex:: add(complex d2){
    complex d3;
    d3.real=real+d2.real;
    d3.img=img+d2.img;
    return d3;
}
complex complex::mul(complex d2){
    complex d4;
    d4.real=(real*d2.real)-(img*d2.img);
    d4.img=(real*d2.img)+(img*d2.real);
    return d4;
}
void complex::display(){
    cout<<real<<" + "<<img<<"i"<<endl;
}

main(){
    complex d1,d2,d3,d4;
    d1.input();
    d2.input();
        cout<<"\n-------Result-------\n";
    d3=d1.add(d2);
    d3.display();
    
    d4=d1.mul(d2);
    d4.display();
}