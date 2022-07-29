#include <iostream>
using namespace std;
class Time{
    private:
        int minute,hours;
    public:
        void input();
        void operator++();
        void operator--(int);
        void display();
};
void Time::input(){
    cout<<"enter hours : ";
    cin>>hours;
    cout<<"enter minutes : ";
    cin>>minute;
}
void Time::operator++(){
    ++minute;
    if(minute==60){
        ++hours;
        minute=0;
    }
}
void Time::operator--(int){
    minute--;
    if(minute==-1){
        minute=59;
        hours--;
    }
}
void Time::display(){
    cout<<"\n----------Display-------------\n";
    cout<<hours<<"h "<<minute<<"min";
}
main(){
    Time t;
    t.input();

    t.display(); 
    ++t;
    t.display(); 
    ++t;
    t.display(); 
    ++t;
    t.display(); 
    t--;            //it orininally calls as t.operator--(int) thats why in function definition and declaration we pass int as argument to tell compiler that is post increment/decrement
    t.display(); 
    t--;
    t.display(); 
    t--;
    t.display(); 
    t--;
    t.display(); 
}