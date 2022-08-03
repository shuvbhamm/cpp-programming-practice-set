#include <iostream>
using namespace std;
class Employee{
    private:
        int id;
        string name;
        float salary;
        string department;
        long long mobile;
    public:
        Employee(){
            id=0;
            name="N/A";
            salary=0.0;
            department="N/A";
            mobile=100;
        }
        Employee(int i,string n,float s,string d,long long m){
            id=i;
            name=n;
            salary=s;
            department=d;
            mobile=m;
        }
        void display(){
            cout<<"id : "<<id<<endl;
            cout<<"name : "<<name<<endl;
            cout<<"salary : "<<salary<<endl;
            cout<<"department : "<<department<<endl;
            cout<<"mobile : "<<mobile<<endl;
            cout<<endl;
        }
};
main(){

    Employee e; //default constructor function calls
    Employee e1(101,"shubham",30000,"IT",9876543210L);
    Employee e2(102,"ashu",20000,"HR",9872343210L);
    Employee e3(103,"pritish",10000,"Peon",9876543320L);
    Employee e4(104,"abhishek",20000,"Marketing",9874343210L);
    Employee e5(105,"seemant",10000,"IT",9876546510L);

    e.display();
    e1.display();
    e2.display();
    e3.display();
    e4.display();
    e5.display();
}