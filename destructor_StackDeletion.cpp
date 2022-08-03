#include <iostream>
using namespace std;
class demo{
    private:
        int id;
    public:
        demo(){}
        demo(int x){
            id=x;
            cout<<"constructor created id : "<<id<<endl;
        }
        ~demo(){
            cout<<"deleted id : "<<id<<endl;
        }
};
main(){
    demo d1(1);
    demo d2(2);
    demo d3(3);
}