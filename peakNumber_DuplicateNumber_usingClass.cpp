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
    void removeDuplicate(){
        cout<<"\n-------Remove Duplicate-------\n";
        for(int i=0;i<10;i++){
            int c=0;
            for(int j=i-1;j>=0;j--){
                if(a[j]==a[i]){
                    c++;
                }
            }
            if(c==0){
                cout<<a[i]<<"\t";
            }
        }
    }
    void printDuplicate(){
        cout<<"\n-------Print Duplicate-------\n";
        for(int i=0;i<10;i++){
            int c=0;
            for(int j=i-1;j>=0;j--){
                if(a[j]==a[i]){
                    c++;
                }
            }
            if(c!=0){
                cout<<a[i]<<"\t";
            }
        }
    }
};
main(){
    demo d1;
    d1.input();
    d1.removeDuplicate();
    d1.printDuplicate();
}