#include <iostream>
#include <map>
#include <iterator>
using namespace std;
main(){
    map<string ,int>m;
    int marks,key;
    string name;
    for(int i=1;i<=5;i++){
        cout<<"enter name and marks : ";
        cin>>name>>marks;
        m.insert(pair<string,int>(name,marks));
    }
    cout<<"enter key for searching marks : ";
    cin>>key;
    map<string,int>::iterator p;
    cout<<"\n---------------------------\n";
    for(p=m.begin();p!=m.end();p++){
        if((p->second)==key){
            cout<<"NAME : "<<p->first<<"\tMARKS : "<<p->second<<endl;
        }
    }
}