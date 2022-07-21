#include <iostream>
using namespace std;
class measurement{
    private:
        int m,cm;
    public:
        void input(){
            cout<<"enter metre : ";
            cin>>m;
            cout<<"enter centimetre : ";
            cin>>cm;
        }
        void addMeasure(measurement m2){
            m+=m2.m;
            cm+=m2.cm;
            while(cm>=100){
                m++;
                cm-=100;
            }
            cout<<"\nfinal measurement : "<<m<<" metre "<<cm<<" centimetre";
        }
};
main(){
    measurement m1,m2;
    m1.input();
    m2.input();
    m1.addMeasure(m2);
}