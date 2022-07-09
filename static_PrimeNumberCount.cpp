#include <iostream>
using namespace std;
class demo{
    static int count;
    int a[5];
    
    public:
    void input(){
        int n=0;
        for(int i=0;i<5;i++){
            cout<<"enter number : ";
            cin>>a[i];
        }
        cout<<"\n";
        for(int i=0;i<5;i++){
            n=0;
            for(int j=1;j<=a[i]/2;j++){
                if(a[i]%j==0){
                    n++;
                }
            }
            if(n==1){
                count++;
            }
        }
    }
    static void prime(){
        cout<<"Total prime number(s) : "<<count;
    }
};
int demo::count;
main(){
    demo d1,d2,d3;
    d1.input();
    d2.input();
    d3.input();

    demo::prime();
}