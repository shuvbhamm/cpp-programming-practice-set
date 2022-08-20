#include <iostream>
#include <set>
#include <iterator>
using namespace std;

main(){
    // set <int ,greater <int>> s;  //for descending
    set <int> s;  //for ascending
    s.insert(90);
    s.insert(80);
    s.insert(70);
    s.insert(80);
    s.insert(50);
    s.insert(40);

    set <int>::iterator p;
    for(p=s.begin();p!=s.end();p++){
        cout<<*p<<endl;
    }
}