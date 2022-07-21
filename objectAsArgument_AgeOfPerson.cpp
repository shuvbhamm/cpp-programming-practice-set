#include <iostream>
using namespace std;
class person{
    private:
        int age;
        string name;
    public:
        void input(){
            cout<<"enter name : ";
            cin>>name;
            cout<<"enter age : ";
            cin>>age;
        }
        void compareAge(person p2,person p3){
            cout<<"\n-------OLDEST CITIZEN-------\n";
            if(age>p2.age && age>p3.age){
                cout<<"\nNAME : "<<name;
                cout<<"\nAGE : "<<age;
            }
            if(p3.age>p2.age && p3.age>age){
                cout<<"\nNAME : "<<p3.name;
                cout<<"\nAGE : "<<p3.age;
            }
            if(p2.age>p3.age && p2.age>age){
                cout<<"\nNAME : "<<p2.name;
                cout<<"\nAGE : "<<p2.age;
            }
        }
};
main(){
    person p1,p2,p3;
    p1.input();
    p2.input();
    p3.input();
    p1.compareAge(p2,p3);
}