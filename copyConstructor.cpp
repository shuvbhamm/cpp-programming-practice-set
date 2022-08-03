#include <iostream>
using namespace std;
class demo{
    private:
        int a,b;
    public:
        demo(){
            a=0;
            b-0;
        }
        demo(int x,int y){
            a=x;
            b=y;
        }
        demo(demo &obj){
            a=obj.a;
            b=obj.b;
        }
        void display(){
            cout<<"a : "<<a<<endl;
            cout<<"b : "<<b<<endl;
        }
};
main(){
    demo d1;
    demo d2(7,8);
    demo d3(d2);
    d1.display();
    d2.display();
    d3.display();
}