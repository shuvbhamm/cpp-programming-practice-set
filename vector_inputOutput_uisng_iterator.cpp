#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

main(){
    vector <int> v;
    int a;

    for(int i=1;i<=10;i++){
        cout<<"enter number : ";
        cin>>a;
        v.push_back(a);
    }
    vector <int>::iterator p;
    for(p=v.begin();p!=v.end();p++){
        cout<<*p<<endl;
    }
}