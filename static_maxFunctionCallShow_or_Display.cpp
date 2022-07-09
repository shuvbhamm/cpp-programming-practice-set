#include <iostream>
using namespace std;
class demo{
    static int n;
    static int m;
    public:
        void show(){
            n++;
        }
        void display(){
            m++;
        }
    static void count(){
        if(n>m){
            cout<<"SHOW : "<<n;
        }
        else{
            cout<<"DISPLAY : "<<m;
        }
    }
};
int demo::n;
int demo::m;
main(){
    demo d1,d2,d3;
    d1.show();
    d2.show();
    d3.show();
    d2.show();
    d1.show();

    d1.display();
    d2.display();
    d3.display();
    d1.display();

    demo::count();
}