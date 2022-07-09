#include <iostream>
using namespace std;
main(){
    int n,a,temp=0,cnt=0;
    cout<<"enter how many inputs you want : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a;
        if(temp>a){
            cnt++;
        }
        temp=a;
    }
    if(cnt>=1){
        cout<<"\nNot Ascending";
    }
    else{
        cout<<"\nAscending";
    }
}