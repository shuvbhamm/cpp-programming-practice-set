#include <iostream>
#include <fstream>
using namespace std;
main(){
    ifstream fin;
    fin.open("student.txt");
    int roll;
    float marks;
    string name;
    for(int i=1;i<=5;i++){
        fin>>roll>>name>>marks;
        cout<<roll<<"\t"<<name<<"\t"<<marks<<"\n";
    }
    fin.close();
}