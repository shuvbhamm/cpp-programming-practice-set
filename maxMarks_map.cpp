#include <iostream>
#include <map>
#include <iterator>
using namespace std;
main(){
    map<string,int>m;
    int max=0,marks;
    string name;

    for(int i=1;i<=5;i++){
        cout<<"enter name and marks : ";
        cin>>name>>marks;
        m.insert(pair<string,int>(name,marks));
    }

    map<string,int>::iterator p;
    
    for(p=m.begin();p!=m.end();p++){
        if(max<(p->second)){
            max=p->second;
            marks=p->second;
            name=p->first;
        }
    }
    cout<<"\nName : "<<name<<"\tMarks : "<<marks<<endl;
}