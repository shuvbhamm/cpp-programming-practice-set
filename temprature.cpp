#include <iostream>
using namespace std;
class temprature{
    private:
        float cel,fahr;
    public:
        temprature();
        void input();
        void calculate();
        void display();
};
temprature::temprature(){
    cel=0;
}
void temprature::input(){
    cout<<"enter celsius : ";
    cin>>cel;
}
void temprature::calculate(){
    fahr=cel*9/5+32;
}
void temprature::display(){
    cout<<"celsius to fahrenheit : "<<fahr<<endl;
}

main(){
    temprature T;
    T.display();
    T.input();
    T.calculate();
    T.display();
}