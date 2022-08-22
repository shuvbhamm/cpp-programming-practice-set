#include <iostream>
#include <map>
#include <iterator>
using namespace std;
main(){
    multimap<string,int> m;
    int marks,total=0,max=0;
    string name;

    for(int i=1;i<=5;i++){
        cout<<"enter name : ";
        cin>>name;
        total=0;
        for(int j=1;j<=3;j++){
            cout<<"enter marks : ";
            cin>>marks;
            total+=marks;
            m.insert(pair<string,int>(name,total));
        }
        cout<<endl;
    }

    multimap<string,int>::iterator p;

    for(p=m.begin();p!=m.end();p++){
        if(max<p->second){
            max=p->second;
            name=p->first;
            total=p->second;
        }
    }
    cout<<"NAME\t\tTOTAL\n";
    cout<<name<<"\t\t"<<total;
}