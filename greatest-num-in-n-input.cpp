#include <iostream>
using namespace std;
main(){
    int n,a,temp=0;
    cout<<"enter how many inputs you want : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a;
        if(a>temp){
            temp=a;
        }
    }
    cout<<"\nGreatest number = "<<temp;
}