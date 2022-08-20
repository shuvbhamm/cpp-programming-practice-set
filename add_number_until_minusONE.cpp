#include <iostream>
#include <set>
#include <iterator>
using namespace std;
main(){
    set <int> s;
    int a;
    while(1){
        cout<<"enter number : ";
        cin>>a;
        s.insert(a);
        if(a==(-1)){
            break;
        }
    }
    set <int>::iterator p; 
    int sum=0;
    for(p=s.begin();p!=s.end();p++){
        if(*p==-1){
            continue;
        }
        sum+=(*p);
    }
    cout<<"sum : "<<sum;
}