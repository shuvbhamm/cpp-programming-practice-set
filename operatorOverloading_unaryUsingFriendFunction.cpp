#include <iostream>
using namespace std;
class Demo{
    private:
        int a,b;
    public:
        void input();
        void display();
        friend void operator- (Demo &x1); //&(reference operator is must)
};
void Demo::input(){
    cout<<"enter a and b : ";
    cin>>a>>b;
}
void Demo::display(){
    cout<<"\n----------Result-----------\n";
    cout<<a<<" "<<b;
}
void operator-(Demo &x1){
    x1.a=-x1.a;
    x1.b=-x1.b;
}
main(){
    Demo x1;
    x1.input();
    -x1;
    x1.display();
}