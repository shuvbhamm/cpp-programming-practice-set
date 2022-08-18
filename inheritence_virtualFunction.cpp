#include <iostream>
using namespace std;
class M{
    public:
        virtual void show(){         //if we dont use 'virtual' keyword then the show() of base class will always call even if you change the pointer location , this is because C++ uses Early Binding (or Compile time Binding)
            cout<<"A";               //binding means memory mapping      
        }                            //overriding means making function with same name and same arguments in base and child class also called ambiguity     
};
class N:public M{
    public:
        void show(){
            cout<<"B";
        }
};
main(){
    M *p;

    M obj1;
    p=&obj1;
    p->show();

    N obj2;
    p=&obj2;
    p->show();
}