#include <iostream>
#include <set>
using namespace std;
main(){
    set <int,greater> s;
    int a;
    while(1){
        cout<<"enter number : ";
        cin>>a;
        s.insert(a);
        if(a==(-1)){
            break;
        }
    }
    
    int index=0,sum=0;
    while(s.at(index)!=(-1)){
        sum+=s.at(index);
        index++;
    }
    cout<<"sum : "<<sum;
}