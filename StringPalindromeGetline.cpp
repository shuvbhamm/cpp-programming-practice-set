#include <iostream>
#include <sstream>
using namespace std;
main(){
    string x,y,reverse="";
    cout<<"enter names to check palindrome : ";
    getline(cin,x);
    stringstream p(x);
    while(p>>y){
        for(int i=y.length()-1;i>=0;i--){
            reverse=reverse+y[i];
        }
        if(y==reverse){
            cout<<reverse<<" is palindrome\n";
        }
        reverse="";
    }
}
