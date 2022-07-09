#include <iostream>
using namespace std;

class Emp1;
class Emp2;
class Emp3;

class Emp1{
    int a;
    public:
    void input(){
        cout<<"enter 1st salary : ";
        cin>>a;
    }
    friend void avgSalary(Emp1 e1,Emp2 e2,Emp3 e3);
};
class Emp2{
    int b;
    public:
    void input(){
        cout<<"enter 2nd salary : ";
        cin>>b;
    }
    friend void avgSalary(Emp1 e1,Emp2 e2,Emp3 e3);
};
class Emp3{
    int c;
    public:
    void input(){
        cout<<"enter 3rd salary : ";
        cin>>c;
    }
    friend void avgSalary(Emp1 e1,Emp2 e2,Emp3 e3);
};
void avgSalary(Emp1 e1,Emp2 e2,Emp3 e3){
    float avg;
    avg=(e1.a+e2.b+e3.c)/3;
    cout<<"\nAverage Salary : "<<avg;
}
main(){
    Emp1 e1;
    Emp2 e2;
    Emp3 e3;
    e1.input();
    e2.input();
    e3.input();
    avgSalary(e1,e2,e3);
}