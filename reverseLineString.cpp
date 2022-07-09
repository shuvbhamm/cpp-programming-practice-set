// INPUT:  my name is shubham
// OUTPUT: shubham is name my
#include <iostream>
#include <sstream>
using namespace std;
main(){
    string x,y,rev="";
    cout<<"enter full name : ";
    getline(cin,x);
    for(int i=x.length()-1;i>=0;i--){
        rev=rev+x[i];
    }
    cout<<rev<<" length :"<<rev.length();  //to check the reverse of whole string and then reverse each word and add a space between them
    x="";
    stringstream p(rev);
    while(p>>y){
        for(int i=y.length()-1;i>=0;i--){
            x=x+y[i];
        }
        x=x+" ";
    }
    cout<<"\n"<<x<<" length :"<<x.length();
}