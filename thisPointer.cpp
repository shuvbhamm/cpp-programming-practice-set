// this pointer is used when you want to give same name to local variable and instance variable, and this pointer always points to the instance variable
// if we dont use this pointer in this case then due to the highest priority of local variable , instance variabe never gets initialized 
// thus it shows garbage value

#include <iostream>
using namespace std;
class Student{
    int rNum;
    string name;
    float marks;

    public:
        Student(){}
        Student(int rNum,string name,float marks){
            this-> rNum=rNum;
            this-> name=name;
            this-> marks=marks;
        }
        void Display(){
            cout<<"Roll Num : "<<rNum<<endl
                <<"Name : "<<name<<endl
                <<"Marks : "<<marks<<endl;
        }
};
main(){
    Student s1(101,"shubham",78.6);
    s1.Display();
}