#include <iostream>
using namespace std;
class demo{
    int x[5],y[5],z[10];
    public:
    void input(){
        for(int i=0;i<5;i++){
            cout<<"enter first set : ";
            cin>>x[i];
        }
        cout<<"\n";
        for(int i=0;i<5;i++){
            cout<<"enter second set : ";
            cin>>y[i];
        }
        // for transfering both sets to another array and then finding union
        for(int i=0;i<5;i++){
            z[i]=x[i];
        }
        for(int i=5;i<10;i++){
            z[i]=x[i];
        }
    }
    void findUnion(){
        cout<<"\n-------Union-------\n";
        for(int i=0;i<10;i++){
            int c=0;
            for(int j=i-1;j>=0;j--){
                if(z[j]==z[i]){
                    c++;
                }
            }
            if(c==0){
                cout<<z[i]<<"\t";
            }
        }
    }
    void findIntersection(){
        cout<<"\n-------Intersection-------\n";
        for(int i=0;i<5;i++){
            for(int j=0;j<5;j++){
                if(x[i]==y[j]){
                    cout<<x[i]<<"\t";
                }
            }
        }
    }
};
main(){
    demo d1;
    d1.input();
    d1.findUnion();
    d1.findIntersection();
}