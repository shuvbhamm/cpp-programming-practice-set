#include <iostream>
using namespace std;
main(){
    string name;    int i;
    cout<<"enter name : ";
    cin>>name;
    for(i=0;i<name.length();i++){
        if(name[i]>=65 && name[i]<=90){
            name[i]=name[i]+32;
        }
        else if(name[i]>=97 && name[i]<=122){
            name[i]=name[i]-32;
        }
    }
    cout<<"After changing case : "<<name;
}