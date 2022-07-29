#include <iostream>
using namespace std;
class Demo{
    private:
        int a,b;
    public:
        void input();
        void operator++();
        void display();
};
void Demo::input(){
    cout<<"enter a and b : ";
    cin>>a>>b;
}
void Demo::operator++(){
    ++a;
    ++b;
}
void Demo::display(){
    cout<<"\n------Display------\n";
    cout<<a<<" "<<b;
}
main(){
    Demo d1;
    d1.input();
    ++d1;
    d1.display();
}