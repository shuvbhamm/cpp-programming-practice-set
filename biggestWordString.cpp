#include <iostream>
#include <sstream>
using namespace std;
main(){
    string x,y,bigWord="";
    int max=0;
    cout<<"enter strings to find the bigger word : ";
    getline(cin,x);
    stringstream p(x);
    while(p>>y){
        if(max<y.length()){
            max=y.length();
            bigWord="";
            for(int i=0;i<y.length();i++){
                bigWord=bigWord+y[i];
            }
        }
    }
    cout<<"Biggest word : "<<bigWord<<"\nWords : "<<max;
}