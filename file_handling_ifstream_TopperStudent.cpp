#include <iostream>
#include <fstream>
using namespace std;
main(){
    ifstream f;
    f.open("student.txt");
    int roll,max=0,TopperRoll;
    string name,TopperName;
    float marks;
    for(int i=1;i<=5;i++){
        f>>roll>>name>>marks;
        if(max<marks){
            max=marks;
            TopperRoll=roll;
            TopperName=name;
        }
    }
    cout<<TopperRoll<<"\t"<<TopperName<<"\t"<<max<<"\n";
}