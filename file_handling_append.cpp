#include <iostream>
#include <fstream>
using namespace std;
main(){
    ofstream fout;
    fout.open("student.txt",ios::app);
    int roll;
    string name;
    float marks;
    for(int i=1;i<=5;i++){
        cout<<"enter roll name marks : ";
        cin>>roll>>name>>marks;
        fout<<roll<<"\t"<<name<<"\t"<<marks<<"\n";
    }
    fout.close();
    ifstream fin;
    fin.open("student.txt");
    while(1){
        fin>>roll>>name>>marks;
        if(fin.eof()){
            break;
        }
        cout<<roll<<"\t"<<name<<"\t\t"<<marks<<"\n";
    }
    fin.close();
}