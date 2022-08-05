#include <iostream>
using namespace std;
main(){
    int a=4,b=0;
    cout<<"enter a and b : ";
    cin>>a>>b;

    try{
        if(b==0){
            throw 1;
        }
        else{
            cout<<a/b;
        }
    }catch(int){
        cout<<"divided by zero";
    }
}