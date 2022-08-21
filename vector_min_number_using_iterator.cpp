#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

main(){
    vector <int> v;
    int a,min;
    for(int i=1;i<=5;i++){
        cout<<"Enter number : ";
        cin>>a;
        v.push_back(a);
    }
    vector <int> :: iterator p;
    min=v.front();          //assigning first element of vector to max variable for comparision
    for(p=v.begin();p!=v.end();p++){
        if(min>*p){
            min=*p;
        }
    }
    cout<<"minimum number in vector array : "<<min<<endl;
}