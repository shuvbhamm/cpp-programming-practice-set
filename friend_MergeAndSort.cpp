#include <iostream>
using namespace std;

class demo1;
class demo2;

class demo1{
    int a[5];
    public:
    void input(){
        for(int i=0;i<5;i++){
            cout<<"enter 1st array number : ";
            cin>>a[i];
        }
    }
    friend void MergeSort(demo1 d1,demo2 d2);
};
class demo2{
    int b[5];
    public:
    void input(){
        for(int i=0;i<5;i++){
            cout<<"enter 2nd array number : ";
            cin>>b[i];
        }
        
    }
    friend void MergeSort(demo1 d1,demo2 d2);
};
void MergeSort(demo1 d1,demo2 d2){
    int c[10];
    for(int i=0;i<5;i++){
        c[i]=d1.a[i];
    }
    for(int i=5;i<10;i++){
        c[i]=d2.b[i-5];
    }

    cout<<"\nAfter Merge : ";
    for(int i=0;i<10;i++){
        cout<<"\t"<<c[i];
    }

    for(int i=0;i<10;i++){
        for(int j=i+1;j<10;j++){
            if(c[i]>c[j]){
                int temp=c[i];
                c[i]=c[j];
                c[j]=temp;
            }
        }
    }

    cout<<"\nAfter Sort : ";
    for(int i=0;i<10;i++){
        cout<<"\t"<<c[i];
    }
}
main(){
    demo1 d1;
    demo2 d2;
    d1.input();
        cout<<"\n";
    d2.input();
    MergeSort(d1,d2);
}