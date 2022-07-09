#include <iostream>
using namespace std;
class demo{
    static int c;
    public:
    void show(){
        c++;
    }
    static void display(){
        cout<<"Called "<<c<<" times";   //static function don't require any object to call
    }
};
int demo::c;
main(){
    demo d1,d2,d3;

    d1.show();
    d1.show();
    d1.show();
    d2.show();
    d2.show();
    d2.show();
    d2.show();
    d3.show();
    d3.show();
    d3.show();
    d3.show();

    demo::display();
}
