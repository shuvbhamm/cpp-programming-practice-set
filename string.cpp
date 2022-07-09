#include <iostream>
using namespace std;
main(){
    string name;
    cout<<"enter name : ";
    cin>>name;
    for(int i=0;i<name.length();i++){
        cout<<name[i];
    }
}