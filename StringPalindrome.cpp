#include <iostream>
using namespace std;
main(){
    string x,y="";
    cout<<"entere any word to check palindrome : ";
    cin>>x;
    for(int i=x.length()-1;i>=0;i--){
        y=y+x[i];
    }
    if(x==y){
        cout<<"palindrome";
    }
    else{
        cout<<"not palindrome";
    }
}