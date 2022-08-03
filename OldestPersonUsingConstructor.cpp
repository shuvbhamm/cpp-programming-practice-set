#include <iostream>
using namespace std;
class person{
    private:
        int age;
        string name;
    public:
        person(){}
        person(int a,string n){
            age=a;
            name=n;
        }
        person compareAge(person p2,person p3){
            person p4;
            if(age>p2.age && age>p3.age){
                p4.age=age;
                p4.name=name;
            }
            if(p2.age>age && p2.age>p3.age){
                p4.age=p2.age;
                p4.name=p2.name;
            }
            if(p3.age>p2.age && p3.age>age){
                p4.age=p3.age;
                p4.name=p3.name;
            }
            return p4;
        }
        void display(){
            cout<<"\n---------Oldest person----------\n";
            cout<<"name : "<<name<<endl;
            cout<<"age : "<<age<<endl;
        }
};
main(){
    int age;
    string name;

    cout<<"enter name : ";
    cin>>name;
    cout<<"age : ";
    cin>>age;
    person p1(age,name);

    cout<<"enter name : ";
    cin>>name;
    cout<<"age : ";
    cin>>age;
    person p2(age,name);

    cout<<"enter name : ";
    cin>>name;
    cout<<"age : ";
    cin>>age;
    person p3(age,name);

    person p4;
    p4=p1.compareAge(p2,p3);
    p4.display();
}