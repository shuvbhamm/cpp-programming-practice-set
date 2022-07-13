#include <iostream>
using namespace std;
class student{
    private:
        int rollNum;
        string name;
        float marks;
    public:
        student(){
            rollNum=0;
            name="N/A";
            marks=0;
        }
        student(int x,string y,float z){
            rollNum=x;
            name=y;
            marks=z;
        }
        void display(){
            cout<<"\nRoll No : "<<rollNum<<endl;
            cout<<"Name : "<<name<<endl;
            cout<<"Marks : "<<marks<<endl;
        }
};
main(){
    student s;
    student s1(101,"shubham",99);
    student s2(102,"pritish",33);
    
    s.display();
    s1.display();
    s2.display();
}