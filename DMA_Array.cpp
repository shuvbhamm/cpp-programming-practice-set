#include <iostream>
using namespace std;
class dynamic{
    private:
        int *p;
        int sizeOFarray;
    public:
        dynamic(){
            p=new int[5];
            sizeOFarray=sizeof(int[5])/sizeof(int);
        }
        dynamic(int size){
            p=new int[size];
            sizeOFarray=sizeof(int[size])/sizeof(int);
        }
        void input(){
            for(int i=0;i<sizeOFarray;i++){
                cout<<"enter number : ";
                cin>>p[i];
            }
        }
        void maximum(){
            int max=p[0];
            for(int i=0;i<sizeOFarray;i++){
                if(p[i]>max){
                    max=p[i];
                }
            }
            cout<<"max : "<<max;
        }
};
main(){
    dynamic d;
    dynamic d1(8);

    d.input();
    d.maximum();

    cout<<"\n";
    
    d1.input();
    d1.maximum();
}