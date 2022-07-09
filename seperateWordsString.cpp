#include <iostream>
#include <sstream>
using namespace std;
main(){
    string x,y;
    cout<<"enter full name : ";
    getline(cin,x);
    stringstream p(x);  //stringstream() function is included in <sstream> header file.
    while(p>>y){
        cout<<y<<"\n";
    }
}