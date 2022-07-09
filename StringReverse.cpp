#include <iostream>
using namespace std;
main(){
    string x;
    string y="";
    cout<<"enter any name to reverse : ";
    cin>>x;
    for(int i=x.length()-1;i>=0;i--){
        y=y+x[i];
    }
    cout<<"after reverse : "<<y;
}