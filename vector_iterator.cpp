#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

main(){
    vector <int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    // decalring iterator
    vector <int>::iterator p;
    for(p=v.begin(); p!=v.end(); p++){
        cout<<*p<<endl;
    }
}