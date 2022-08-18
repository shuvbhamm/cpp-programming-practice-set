#include <iostream>
using namespace std;
class demo{
    protected:
        int a[6];
    public:
        void input(){
            for(int i=0;i<6;i++){
                cout<<"enter number : ";
                cin>>a[i];
            }
        }
        virtual void cal(){ }
};
class simpleSort:public demo{
    public:
        void cal(){
            int temp;
            for(int i=0;i<6;i++){
                for(int j=i+1;j<6;j++){
                    if(a[i]>a[j]){
                        temp=a[i];
                        a[i]=a[j];
                        a[j]=temp;
                    }
                }
            }
            cout<<"\n--------Sorting--------\n";
            for(int i=0;i<6;i++){
                cout<<a[i]<<"\t";
            }
            cout<<endl;
        }
};
class HalfAscendingHalfDescending:public demo{
    public:
        void cal(){
            int temp;
            //half ascending
            for(int i=0;i<3;i++){
                for(int j=i+1;j<3;j++){
                    if(a[i]>a[j]){
                        temp=a[i];
                        a[i]=a[j];
                        a[j]=temp;
                    }
                }
            }
            //half descending
            for(int i=3;i<6;i++){
                for(int j=i+1;j<6;j++){
                    if(a[i]<a[j]){
                        temp=a[i];
                        a[i]=a[j];
                        a[j]=temp;
                    }
                }
            }
            cout<<"\n-----Half Ascending Half Descending-----\n";
            for(int i=0;i<6;i++){
                cout<<a[i]<<"\t";
            }
            cout<<endl;
        }
};
class sortViaFirstDigit:public demo{
    public:
        void cal(){
            int n,firstDigit_before,firstDigit_after;
            for(int i=0;i<6;i++){
                for(int j=i+1;j<6;j++){
                    n=a[i];
                    while(n!=0){
                        firstDigit_before=n%10;
                        n=n/10;
                    }
                    n=a[j];
                    while(n!=0){
                        firstDigit_after=n%10;
                        n=n/10;
                    }
                    if(firstDigit_before>firstDigit_after){
                        int temp;
                        temp=a[i];
                        a[i]=a[j];
                        a[j]=temp;
                    }
                }
            }
            cout<<"\n-----------Sort Via First Digit-----------\n";
            for(int i=0;i<6;i++){
                cout<<a[i]<<endl;
            }
        }
};
main(){
    demo *p;

    simpleSort s1;
    p=&s1;
    p->input();
    p->cal();

    HalfAscendingHalfDescending s2;
    p=&s2;
    p->input();
    p->cal();    

    sortViaFirstDigit s3;
    p=&s3;
    p->input();
    p->cal();
}