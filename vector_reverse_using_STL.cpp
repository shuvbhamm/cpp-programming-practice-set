#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

main(){
    vector <int> v;
    int a,i;
    for(i=1;i<=5;i++){
        cout<<"enter number : ";
        cin>>a;
        v.push_back(a);
    }
    reverse(v.begin(),v.end());
    for(i=0;i<v.size();i++)
        cout<<v.at(i)<<endl;
}