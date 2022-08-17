#include <iostream>
using namespace std;
class student{
    protected:
        int rollNum;
        string name;
    public:
        void  input(){
            cout<<"enter rollnum and name : ";
            cin>>rollNum>>name;
        }
};
class marks:public student{
    private:
        int m1,m2,m3;
    public:
        void input(){
            cout<<"enter m1 m2 m3 : ";
            cin>>m1>>m2>>m3;
        }
        void total(){
            int total;
            total=m1+m2+m3;
            cout<<"Roll : "<<rollNum<<"\nName : "<<name;
            cout<<"\ntotal marks : "<<total<<endl;
        }
};
main(){
    marks m;
    //whenever you try to name function of child class and base class same ,it will throw error ,and this error is callled ambiguity
    //so here is the syntax : objectNameOfChildClass.NameOfBaseClass::functionName();
    m.student::input();
    m.input();
    m.total();
}