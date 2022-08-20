#include <iostream>
#include <vector>
using namespace std;
main(){
    vector <int> v;
    int a;
    int sum=0;
    for(int i=1;i<=10;i++){
        cout<<"enter number : ";
        cin>>a;
        v.push_back(a);
    }
    for(int i=0;i<v.size();i++){
        sum+=v.at(i);
    }
    cout<<"sum of vector : "<<sum<<endl;
}