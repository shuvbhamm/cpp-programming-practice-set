#include <iostream>
#include <math.h>
using namespace std;
class Data{
    protected:
        int a;
    public:
        void input(){
            cout<<"enter a : ";
            cin>>a;
        }
        virtual void cal()=0;       //if you create a pure virtual function then it is is compulsary for all the child class
                                    //and if pure virtual function was created then the class which holds it calls abstract class
};
class square:public Data{
    public:
        void cal(){
            float sqr;
            sqr=a*a;
            cout<<"square : "<<sqr<<endl;
        }
};
class sqrRoot:public Data{
    public:
        void cal(){
            float sqrRoot;
            sqrRoot=sqrt(a);
            cout<<"square root : "<<sqrRoot<<endl;
        }
};
class cube:public Data{
    public:
        void cal(){
            float cube;
            cube=a*a*a;
            cout<<"cube : "<<cube<<endl;
        }
};
main(){
    Data *p;
    square s;
    sqrRoot sq;
    cube c;

    p=&s;
    p->input();
    p->cal();

    p=&sq;
    p->input();
    p->cal();

    p=&c;
    p->input();
    p->cal();
}