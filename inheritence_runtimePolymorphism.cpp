#include <iostream>
using namespace std;
class shape{
    protected:
        int a;
    public:
        void input(){
            cout<<"enter a : ";
            cin>>a;
        }
        virtual void cal(){ }       //whenever we points a class always function of base class calls thats why we create prototype of that function which we are going to use in the child class
};
class circle:public shape{
    public:
        void cal(){
            float area;
            area=3.14*a*a;
            cout<<"area of circle : "<<area<<endl;
        }
};
class square:public shape{
    public:
        void cal(){
            float area;
            area=a*a;
            cout<<"area of square : "<<area<<endl;
        }
};
main(){
    shape *p;       //In pointer to base class always create pointer of base classs
    circle c;
    square s;

    p=&c;
    p->input();
    p->cal();

    p=&s;
    p->input();
    p->cal();
}