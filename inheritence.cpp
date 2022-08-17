#include <iostream>
using namespace std;
class M{
    public:
        void show(){
            cout<<"Hello ";
        }
};
class N:public M{
    public:
        void display(){
            cout<<"Shubham";
        }
};
main(){
    N obj;
    obj.show();
    obj.display();
}