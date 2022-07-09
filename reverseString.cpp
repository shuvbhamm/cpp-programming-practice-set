#include <iostream>
using namespace std;
main(){
    string s;   int i;
    cout<<"enter any string : ";
    cin>>s;
    cout<<"Reverse String : ";
    for(i=s.length()-1;i>=0;i--){
        cout<<s[i];
    }
}