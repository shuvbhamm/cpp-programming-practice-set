#include <iostream>
#include <vector>
using namespace std;

main(){
    vector <int> v;
    int a;
    int sum=0;
    while(1){
        cout<<"enter number : ";
        cin>>a;
        v.push_back(a);
        if(a==-1){
            break;
        }
    }
    int index=0;
    while(1){
        if(v.at(index)!=(-1)){
            sum+=v.at(index);
        }
        if(v.at(index)==(-1) || v.at(index+1)==(-1)){
            break;
        }
        index+=2;
    }
    cout<<"sum of alternate numbers : "<<sum<<endl;
}