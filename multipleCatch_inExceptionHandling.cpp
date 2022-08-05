#include <iostream>
using namespace std;
main(){
    int a;
    cout<<"enter a : ";
    cin>>a;

    try{
        if(a==1){
            throw 1;
        }
        if(a==2){
            throw 3.2;
        }
        else{
            throw 'a';
        }
    }
    catch(int){
        cout<<"int exception";
    }
    catch(double){
        cout<<"double exception";
    }
    catch(char){
        cout<<"char exception";
    }
}