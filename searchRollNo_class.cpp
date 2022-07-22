#include <iostream>
using namespace std;
class student{
    private:
        int rollNum;
        string name;
        float marks;
    public:
        void input(){
            cout<<"\nenter roll Num : ";
            cin>>rollNum;
            cout<<"enter name : ";
            cin>>name;
            cout<<"enter marks : ";
            cin>>marks;
        }
        void search(int k){
            if(k==rollNum){
                cout<<"\nROLL NUM : "<<rollNum<<endl;
                cout<<"NAME : "<<name<<endl;
                cout<<"MARKS : "<<marks<<endl;
            }
        }
};
main(){
    student s[5];
    for(int i=0;i<5;i++){
        s[i].input();
    }
    
    int k;
    cout<<"\nenter rollnum to be searched : ";
    cin>>k;

    for(int i=0;i<5;i++){
        s[i].search(k);
    }
}