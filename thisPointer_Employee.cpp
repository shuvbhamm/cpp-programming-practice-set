#include <iostream>
using namespace std;
class Employee{
    private:
        int id;
        string name,Dept;
        float salary;
    public:
        Employee(){}
        Employee(int id,string name,string Dept,float salary){
            this-> id =id;
            this-> name=name;
            this-> Dept=Dept;
            this-> salary=salary;
        }
        void display(){
            cout<<"ID : "<<id<<endl
                <<"NAME : "<<name<<endl
                <<"DEPARTMENT : "<<Dept<<endl
                <<"SALARY : "<<salary<<" INR"<<endl;
        }
};
main(){
    Employee e1(101,"Shubham","IT",23560.5);
    e1.display();
}