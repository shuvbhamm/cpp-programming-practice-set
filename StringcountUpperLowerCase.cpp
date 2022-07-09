#include <iostream>
using namespace std;
main(){
    string name;
    int i,upper=0,lower=0;
    cout<<"enter name : ";
    cin>>name;
    for(i=0;i<name.length();i++){
        if(name[i]>=65 && name[i]<=90){
            upper++;
        }
        else if(name[i]>=97 && name[i]<=122){
            lower++;
        }
    }
    cout<<"Uppercase Letters : "<<upper<<"\nLowercase Letters : "<<lower;
}