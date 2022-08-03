#include <iostream>
using namespace std;
class Student{
    private:
        int rollNum;
        string name;
        float marks;
    public:
        Student(){
            rollNum=0;
            name="N/A";
            marks=0.0;
        }
        Student(int r,string n,float m){
            rollNum=r;
            name=n;
            marks=m;
        }
        void display(){
            cout<<"name : "<<name<<endl;
            cout<<"rollNum : "<<rollNum<<endl;
            cout<<"marks : "<<marks<<endl;
            cout<<"\n";
        }
};
main(){
    Student s;
    Student s1(101,"shubham",89.5f);
    Student s2(102,"ashu",39.4f);
    Student s3(103,"pritish",50.2f);
    s.display();
    s1.display();
    s2.display();
    s3.display();
}