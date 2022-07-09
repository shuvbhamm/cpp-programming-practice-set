#include <iostream>
using namespace std;
struct demo{
    private:
    int a,b;
    public:
    void input(){
        cout<<"enter any 2 number for their sum : ";
        cin>>a>>b;
    }
    void calculate(){
        int c=a+b;
        cout<<"sum : "<<c;
    }
};
main(){
    demo d1;
    d1.input();
    d1.calculate();
}