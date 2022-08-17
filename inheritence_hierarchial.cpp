#include <iostream>
using namespace std;
class shape{
    protected:
        float a;
    public:
        void input(){
            cout<<"enter a : ";
            cin>>a;
        }
};
class circle:public shape{
    public:
        void cal(){
            float area;
            area=3.14*a*a;
            cout<<"Area of circle : "<<area<<endl;
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
    circle c;
    square s;

    c.input();
    c.cal();

    s.input();
    s.cal();
}