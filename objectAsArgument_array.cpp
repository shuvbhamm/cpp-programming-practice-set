#include <iostream>
using namespace std;
class Data{
    private:
        int a[5];
    public:
        void input(){
            for(int i=0;i<5;i++){
                cout<<"enter number : ";
                cin>>a[i];
            }
            cout<<"\n";
        }
        void add(Data d2){
            cout<<"\n";
            for(int i=0;i<5;i++){
                cout<<"addition : "<<a[i]+d2.a[i]<<endl;
            }
        }
        void sub(Data d2){
            cout<<"\n";
            for(int i=0;i<5;i++){
                cout<<"subtraction : "<<a[i]-d2.a[i]<<endl;
            }
        }
        void common(Data d2){
            cout<<"\n----------common number----------\n";
            for(int i=0;i<5;i++){
                for(int j=0;j<5;j++){
                    if(a[i]==d2.a[j]){
                        cout<<a[i];
                    }
                }
            }
        }
};
main(){
    Data d1,d2;
    d1.input();
    d2.input();
    d1.add(d2);
    d1.sub(d2);
    d1.common(d2);
}