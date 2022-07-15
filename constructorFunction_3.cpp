#include <iostream>
using namespace std;
class sample{
    public:
        sample(){
            cout<<"this is default"<<endl;
        }
        sample(int a){
            cout<<"1 int : "<<a<<endl;
        }
        sample(int a,int b){
            cout<<"2 int : "<<a<<" "<<b<<endl;
        }
        sample(float a){
            cout<<"1 float : "<<a<<endl;
        }
        sample(long int a){
            cout<<"1 long : "<<a<<endl;
        }
        sample(double a){
            cout<<"1 double : "<<a<<endl;
        }
        sample(float a,float b){
            cout<<"2 float : "<<a<<" "<<b<<endl;
        }
};
main(){
    sample s1;
    sample s2(7);               //1 int
    sample s3(4,8);             //2 int
    sample s4(25.5f);           //1 float
    sample s5(2145146845L);     //1 long
    sample s6(7825.44);         //1 double
    sample s7(65.2f,6.8f);      //2 float
}