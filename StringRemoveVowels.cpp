#include <iostream>
using namespace std;
main(){
    string x,y="";
    cout<<"enter any word : ";
    cin>>x;
    for(int i=0;i<x.length()-1;i++){
        if(!(x[i]=='a'||x[i]=='e'||x[i]=='i'||x[i]=='o'||x[i]=='u')){
            y=y+x[i];
        }
    }
    cout<<"after removing vowels : "<<y;
}