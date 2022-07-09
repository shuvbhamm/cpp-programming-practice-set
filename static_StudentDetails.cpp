#include <iostream>
using namespace std;
class student{
    static string clg; //declare
    int rNum;
    string name;
    float marks;

    public:
    void input(){
        cout<<"\nEnter Roll No : ";
        cin>>rNum;
        cout<<"Enter Name : ";
        cin>>name;
        cout<<"Enter Marks : ";
        cin>>marks;
    }
    void display(){
        cout<<"\n----------Student Details----------\n";
        cout<<"RollNUm : "<<rNum<<endl;
        cout<<"Name : "<<name<<endl;
        cout<<"Marks : "<<marks<<endl;
        cout<<"College : "<<clg;
    }
};

string student::clg="Rungta"; //define;

main(){
    student d1,d2,d3;
    d1.input();
    d2.input();
    d3.input();
    
    d1.display();
    d2.display();
    d3.display();
    d2.display();
    d1.display();
    d3.display();
}