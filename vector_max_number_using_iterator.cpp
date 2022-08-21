#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

main(){
    vector <int> v;
    int a,max;
    for(int i=1;i<=5;i++){
        cout<<"enter number : ";
        cin>>a;
        v.push_back(a);
    }
    vector <int> ::iterator p;
    max=v.front();      //assigning first element of vector to max variable for comparision
    for(p=v.begin();p!=v.end();p++){
        if(max<*p){
            max=*p;
        }
    }
    cout<<"max number in vector array : "<<max<<endl;
}