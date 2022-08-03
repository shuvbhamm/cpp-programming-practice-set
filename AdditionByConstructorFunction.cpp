#include <iostream>
using namespace std;
class Math{
    private:
        int a,b;
    public:
        Math(){}
        Math(int x,int y){
            a=x;
            b=y;
        }
        Math add(Math m2){
            Math m3;
            m3.a=a+m2.a;
            m3.b=b+m2.b;
            return m3;
        }
        void display(){
            cout<<"-------Addition------\n";
            cout<<a<<" "<<b;
        }
};
main(){
    int x,y;
    cout<<"enter 2 values for object 1 : ";
    cin>>x>>y;
    Math m1(x,y);

    cout<<"enter 2 values for object 2 : ";
    cin>>x>>y;
    Math m2(x,y);

    Math m3;
    m3=m1.add(m2);
    m3.display();
}