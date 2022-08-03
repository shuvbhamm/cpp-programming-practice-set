// Destructor :
//     synatx : ~className(){ }
 
//     > inverse of constructor
//     > auto calls when object deletes which is end of the code block
//     > can not call
//     > can not overload

#include <iostream>
using namespace std;
class demo{
    private:
        int a;
    public:
        demo(){
            cout<<"default constructor"<<endl;
        }
        demo(int x){
            a=x;
            cout<<"parameter constructor"<<endl;
        }
        ~demo(){
            cout<<"destructor"<<endl;
        }
};
main(){
    demo d1,d2,d3(1),d4(2);
}