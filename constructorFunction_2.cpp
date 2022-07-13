#include <iostream>
using namespace std;
class Data{
    int a,b;
    public:
        Data(){
            a=4;
            b=5;
        }
        Data(int x,int y){
            a=x;
            b=y;
        }
        void display(){
            cout<<a<<"\t"<<b<<"\n";
        }
};
main(){
    Data d1;
    Data d2(7,8);
    Data d3(123,456);
    d1.display();
    d2.display();
    d3.display();
}