#include <iostream>
using namespace std;
class demo{
    int a[10];
    public:
    void input(){
        for(int i=0;i<10;i++){
            cout<<"enter number : ";
            cin>>a[i];
        }
    }
    void frequency(){
        for(int i=0;i<10;i++){
            int count=0,freq=1;
            for(int j=i-1;j>=0;j--){
                if(a[i]==a[j]){
                    count++;
                    freq++;
                }
            }
            if(count>=0){
                cout<<a[i]<<" : frequency : "<<freq<<"\n";
            }
        }
    }
};
main(){
    demo d1;
    d1.input();
    d1.frequency();
}