#include <iostream>
using namespace std;
class math{
    int a,b;
    public:
        math(int x,int y){
            a=x;
            b=y;
        }
        void add(){
            cout<<a<<" + "<<b<<" = "<<a+b<<endl;
        }
};
main(){
    int x,y;
    
    cout<<"enter 2 numbers to add : ";
    cin>>x>>y;
    math m1(x,y);
    m1.add();

    cout<<"enter 2 numbers to add : ";
    cin>>x>>y;
    math m2(x,y);
    m2.add();
}