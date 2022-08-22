#include <iostream>
#include <map>
#include <iterator>
using namespace std;

main(){
    map<string,int>m;
    string name;
    int marks;
            // m.insert(pair<string,int>("Shubham",90));
            // m.insert(pair<string,int>("Pritish",30));
            // m.insert(pair<string,int>("Ashu",80));
            // m.insert(pair<string,int>("Kammu",70));
            // m.insert(pair<string,int>("Mayank",60));
    for(int i=1;i<=5;i++){
        cout<<"enter name and marks : ";
        cin>>name>>marks;
        m.insert(pair<string,int>(name,marks));     //here <string,int> is not mandatory
    }
    map<string,int>::iterator p;

    cout<<"\nNAME\t\tMARKS\n----------------------\n";

    for(p=m.begin();p!=m.end();p++){
        cout<< p->first << "\t\t" << p->second <<endl;
        //it will sort the keys in alphabetic order and to access any function or keys of pointer ,that is iterator here we will use -> operator. for ex : p->input()
    }
}