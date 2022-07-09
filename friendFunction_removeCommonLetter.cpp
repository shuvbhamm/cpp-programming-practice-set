#include <iostream>
using namespace std;
class demo1;
class demo2;

class demo1{
    string x;
    public:
    void input(){
        cout<<"enter first word : ";
        cin>>x;
    }
    friend void removeCommon(demo1 d1,demo2 d2);
};
class demo2{
    string y;
    public:
    void input(){
        cout<<"enter second word : ";
        cin>>y;
    }
    friend void removeCommon(demo1 d1,demo2 d2);
};
void removeCommon(demo1 d1,demo2 d2){
    string z;
    z=d1.x+d2.y;
    cout<<"\n----------------After removing common letter-------\n";
    for(int i=0;i<z.length();i++){
        int count=0;
        for(int j=i-1;j>=0;j--){
            if(z[i]==z[j]){
                count++;
            }
        }
        if(count==0){
            cout<<z[i];
        }
    }
}
main(){
    demo1 d1;
    demo2 d2;

    d1.input();
    d2.input();

    removeCommon(d1,d2);
}