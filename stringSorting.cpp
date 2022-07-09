#include <iostream>
using namespace std;
main(){
    string x;
    char temp;
    cout<<"enter string : ";
    cin>>x;
    for(int i=0;i<x.length();i++){
        for(int j=i+1;j<x.length();j++){
            if(x[i]>x[j])
            {
                temp=x[i];
                x[i]=x[j];
                x[j]= temp;
            }
        }
    }
    cout<<"after sorting : "<<x;
}