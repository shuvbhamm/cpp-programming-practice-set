#include <iostream>
#include <vector>
using namespace std;

main(){
    vector <int> v;
    int a,i;
    for(i=1;i<=5;i++){
        cout<<"enter number : ";
        cin>>a;
        v.push_back(a);
    }
    for(i=0;i<5;i++){
        int temp=v.at(i);
        v.at(i)=v.at(4-i);
        v.at(4-i)=temp;
    }
    for(i=0;i<5;i++){
        cout<<v.at(i)<<endl;
    }
}