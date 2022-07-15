#include <iostream>
using namespace std;
class employee{
    int id;
    string name;
    float salary;
    string department;
    int mobile;

    public:
    employee(){
        id=0;
        name="N/A";
        salary=0;
        department="N/A";
        mobile=0;
    }
    employee(int a,string b,float c,string d,int e){
        id=a;
        name=b;
        salary=c;
        department=d;
        mobile=e;   
    }
    employee (employee &obj){
        id=obj.id;
        name=obj.name;
        salary=obj.salary;
        department=obj.department;
        mobile=obj.mobile;
    }
    void display(){
        cout<<"\nId : "<<id<<endl;
        cout<<"Name : "<<name<<endl;
        cout<<"Salary : "<<salary<<endl;
        cout<<"Department : "<<department<<endl;
        cout<<"Mobile : "<<mobile<<endl;
    }
};
main(){
    employee e;
    employee e1(101,"shubham",25000,"IT",987654321);
    employee e2(420,"pritish",10,"HR",987456123);
    employee e3(e1);
    e.display();
    e1.display();
    e2.display();
    e3.display();
}