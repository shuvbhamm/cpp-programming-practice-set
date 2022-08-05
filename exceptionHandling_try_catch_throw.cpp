#include <iostream>
using namespace std;
main(){
    float a,b;
    cout<<"enter a and b : ";
    cin>>a>>b;
    // cout<<a/(a-b);
    try{
        if(a==b){
            throw 1;
        }
        else{
            cout<<a/(a-b);
        }
    }
    catch(int){
        cout<<"a and b both are same and a-b=0 thats why it is throwing error";
    }
}