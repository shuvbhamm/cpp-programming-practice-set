#include <iostream>
#include <fstream>
using namespace std;
main(){
    ofstream f;
    int rollNum;
    string name;
    float marks;
    f.open("student.txt");
    for(int i=1;i<=5;i++)
    {
        cout<<"enter rollNum Name and marks : ";
        cin>>rollNum>>name>>marks;
        f<<rollNum<<"\t"<<name<<"\t"<<marks<<"\n";
    }
    f.close();
}