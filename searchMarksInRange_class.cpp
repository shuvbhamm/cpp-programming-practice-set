#include <iostream>
using namespace std;
class student{
    private:
        int roll;
        string name;
        float marks;
    public:
        void input(){
            cout<<"\nenter roll number : ";
            cin>>roll;
            cout<<"enter name : ";
            cin>>name;
            cout<<"enter marks : ";
            cin>>marks;
        }
        void search(int m1,int m2){
            if(marks>=m1&&marks<=m2){
                cout<<"\nrollNum : "<<roll<<endl;
                cout<<"name : "<<name<<endl;
                cout<<"marks : "<<marks<<endl;
            }
        }
};
main(){
    student s[5];
    for(int i=0;i<5;i++){
        s[i].input();
    }

    int m1,m2;
    cout<<"enter marks range : ";
    cin>>m1>>m2;

    for(int i=0;i<5;i++){
        s[i].search(m1,m2);
    }
}