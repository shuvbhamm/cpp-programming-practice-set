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
    sum=v.front()+v.back();
    cout<<"sum of first and last number of vector : "<<sum<<endl;
}