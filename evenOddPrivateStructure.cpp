#include <iostream>
using namespace std;
struct demo{
    private:
    int a;
    public:
    void input(){
        cout<<"enter any number : ";
        cin>>a;
    }
    void check(){
        if(a%2==0){
            cout<<"even";
        }
        else{
            cout<<"odd";
        }
    }
};
main(){
    demo d1;
    d1.input();
    d1.check();
}