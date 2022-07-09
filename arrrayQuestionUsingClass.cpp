#include <iostream>
using namespace std;
class demo{
    int a[5];
    public:
    void input(){
        for(int i=0;i<5;i++){
            cout<<"enter number : ";
            cin>>a[i];
        }
    }
    void max(){
        int max=a[0];
        for(int i=0;i<5;i++){
            if(max<a[i]){
                max=a[i];
            }
        }
        cout<<"\nmax : "<<max;
    }
    void min(){
        int min=a[0];
        for(int i=0;i<5;i++){
            if(min>a[i]){
                min=a[i];
            }
        }
        cout<<"\nmin : "<<min;
    }
    void rev(){
        cout<<"\n-------REVERSE------\n";
        for(int i=4;i>=0;i--){
            cout<<a[i]<<"\t";
        }
    }
};
main(){
    demo d1;
    d1.input();
    d1.max();
    d1.min();
    d1.rev();
}