#include <iostream>
using namespace std;
class student{
    private:
        int roll;
        string name;
        float marks;
    public:
        void input(){
            cout<<"enter roll : ";
            cin>>roll;
            cout<<"enter name : ";
            cin>>name;
            cout<<"enter marks : ";
            cin>>marks;
        }
        void search(string k){
            if(name==k){
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

    string k;
    cout<<"\nenter name to be searched : ";
    cin>>k;

    for(int i=0;i<5;i++){
        s[i].search(k);
    }
}