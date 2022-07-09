#include <iostream>
using namespace std;
main(){
    string x,y;
    char temp;
    cout<<"enter strings : ";
    cin>>x>>y;
    for(int i=0;i<x.length();i++){
        for(int j=i+1;j<x.length();j++){
            if(x[i]>x[j]){
                temp=x[i];
                x[i]=x[j];
                x[j]=temp;
            }
        }
    }
    for(int i=0;i<y.length();i++){
        for(int j=i+1;j<y.length();j++){
            if(y[i]>y[j]){
                temp=y[i];
                y[i]=y[j];
                y[j]=temp;
            }
        }
    }
    if(x==y){
        cout<<"ANAGRAM";
    }
    else{
        cout<<"NOT ANAGRAM";
    }
}