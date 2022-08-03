#include <iostream>
using namespace std;
class demo{
    private:
        int *p;
        int *q;
    public:
        demo(){
            p = new int;
            q = new int;
        }
        void input(){
            cout<<"enter p : ";
            cin>>*p;
            cout<<"enter q : ";
            cin>>*q;
        }
        void add(){
            cout<<"sum : "<<*p+*q;
        }
        ~demo(){
            delete p;
            delete q;
        }
};
main(){
    demo d1;
    d1.input();
    d1.add();
}