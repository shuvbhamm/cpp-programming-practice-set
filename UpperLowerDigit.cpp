#include <iostream>
using namespace std;
main(){
    char c;
    cout<<"Enter any character to check if it is uppercase , lowercase, digits or a special character :";
    cin>>c;
    if(c>=65&&c<=90){
        cout<<"\nupper case";
    }
    else if(c>=97&&c<=122){
        cout<<"\nlower case";
    }
    else if(c>=48&&c<=57){
        cout<<"\ndigits";
    }
    else{
        cout<<"\nSpecial character";
    }
}