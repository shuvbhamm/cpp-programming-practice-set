#include <iostream>
using namespace std;
main(){
    char c;
    cout<<"Enter character to change its case : ";
    cin>>c;
    if(c>=65&&c<=90){
        c=c+32;
        cout<<c;
    }
    else if(c>=97&&c<=122){
        c=c-32;
        cout<<c;
    }
    else{
        cout<<"input was not a text";
    }
}