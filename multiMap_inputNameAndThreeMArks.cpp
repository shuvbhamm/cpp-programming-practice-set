#include <iostream>
#include <map>
#include <iterator>
using namespace std;
main(){
    multimap <string , int> m;
    int marks;
    string name;
    for(int i=1;i<=5;i++){
        cout<<"enter name : ";
        cin>>name;
        for(int j=1;j<=3;j++){
            cout<<"enter marks : ";
            cin>>marks;

            m.insert(pair<string,int>(name,marks));
        }
        cout<<endl;
    }

    multimap<string,int>::iterator p;
    cout<<"\nNAME\t\tMARKS\n-----------------------\n";
    for(p=m.begin();p!=m.end();p++){
        cout<<p->first<<"\t\t";
        cout<<p->second<<endl;
    }
}