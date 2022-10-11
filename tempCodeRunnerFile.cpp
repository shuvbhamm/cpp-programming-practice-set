#include <iostream>
#include <vector>
using namespace std;
main(){
    vector<int> v {1,2,3,4,5,66};
    v.erase(v.begin()+1);
    cout<<v[3];
}