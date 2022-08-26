#include <iostream>
#include <fstream>
using namespace std;
main(){
    ifstream f;
    f.open("student.txt");
    int roll;
    string name,key;
    float marks;
    cout<<"enter name for search : ";
    cin>>key;
    for(int i=1;i<=5;i++){
        f>>roll>>name>>marks;
        if(key==name){
            cout<<roll<<"\t"<<name<<"\t"<<marks<<"\n";
        }
    }
    f.close();
}