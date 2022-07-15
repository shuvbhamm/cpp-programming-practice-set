// CONSTRUCTOR :
//     >   create in public section of class
//     >   fuction name and class name should  be same
//     >   no return type
//     >   can not call
//     >   Autocalls when objects is created
//     >   Overload:
//         type: >>default>>parameter>>copy
// WHY CONSTRUCTOR :
//     >   to initialize instance varible (mostly in private section of class)
#include <iostream>
using namespace std;
class demo{
    private:
        int age;
    public:
        demo(){     //no return type required
            age=19;     //initializing instance variable
            cout<<"age : "<<age<<endl;
        }
        demo(int x){    //overloading type int parameter
            age=x;
            cout<<"age : "<<age<<endl;
        }
        demo(string x){     //overloading type string parameter
            cout<<"name is : "<<x;
        }
};
main(){
    demo d1;
    demo d2(25);
    demo d3("shubham");
}
